/*
FUNCTION_NAME: FUN_058cb67c
ENTRY_POINT: 058cb67c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058cb67c(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_24 [4];
  
  lVar3 = param_1;
  if ((DAT_06bc13ef & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(Method_System_Collections_Generic_List<Matrix4x4[]>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_List<Matrix4x4[]>_get_Item__);
    FUN_02f08768(PTR_DAT_067cc628);
    FUN_02f08768(Method_System_Collections_Generic_List<object[]>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<object[]>_Add__);
    FUN_02f08768(PTR_DAT_067da328);
    FUN_02f08768(PTR_DAT_067ca128);
    FUN_02f08768(Method_System_Collections_Generic_List<object[]>_ToArray__);
    FUN_02f08768(Method_System_Collections_Generic_List<Type[]>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<Type[]>_Add__);
    FUN_02f08768(PTR_DAT_067ca3e8);
    FUN_02f08768(Method_System_Collections_Generic_List<Type[]>_GetEnumerator__);
    FUN_02f08768(Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
    FUN_02f08768(PTR_DAT_067cc598);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    FUN_02f08768(PTR_DAT_067d7350);
    lVar3 = FUN_02f08768(Method_System_Collections_Generic_List<Type[]>_get_Count__);
    DAT_06bc13ef = 1;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  local_24[0] = 0;
  if (iVar2 - 2U < 2) {
    uVar5 = FUN_058ca0c8(lVar3,*(undefined8 *)(param_1 + 0x18));
    return uVar5;
  }
  puVar7 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
  if (iVar2 != 4) {
    if (iVar2 != 1) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_067d7350,0);
        if ((uVar4 & 1) == 0) {
          puVar7 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
          if (*(int *)(param_1 + 0x24) == 0) goto LAB_058cbaa8;
          plVar6 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar6,0);
          uVar8 = *(uint *)(param_1 + 0x24);
          if ((uVar8 >> 7 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>_GetEnumerator__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 6 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>__ctor__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 5 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>_get_Count__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 4 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)Method_System_Collections_Generic_List<Type[]>_Add__,
                         0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 3 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Matrix4x4[]>_get_Count__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 2 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Matrix4x4[]>_get_Item__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 1 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>__ctor__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>_ToArray__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 0xf & 1) == 0) {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar6,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>_Add__,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067cc598,0);
          puVar1 = PTR_DAT_067da328;
          local_24[0] = (undefined1)uVar8;
          uVar5 = FUN_0505a384(local_24,*(undefined8 *)PTR_DAT_067da328,0);
          FUN_04f79730(plVar6,uVar5,0);
          if (0xff < (int)uVar8) {
            FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067cc628,0);
            local_24[0] = (undefined1)(uVar8 >> 8);
            uVar5 = FUN_0505a384(local_24,*(undefined8 *)puVar1,0);
            FUN_04f79730(plVar6,uVar5,0);
          }
          FUN_04f79730(plVar6,*(undefined8 *)PTR_DAT_067ca3e8,0);
          if ((param_2 & 1) != 0) {
            uVar5 = FUN_0511a510(0);
            FUN_04f79730(plVar6,uVar5,0);
          }
          uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return uVar5;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar5 = FUN_04f65e2c(*(undefined8 *)
                                Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                               ,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
          return uVar5;
        }
      }
LAB_058cbbdc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar7 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
LAB_058cbaa8:
  return *puVar7;
}


