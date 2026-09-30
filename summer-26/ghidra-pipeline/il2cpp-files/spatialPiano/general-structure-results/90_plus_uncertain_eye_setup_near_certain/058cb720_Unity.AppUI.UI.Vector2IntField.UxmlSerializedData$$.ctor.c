/*
FUNCTION_NAME: Unity.AppUI.UI.Vector2IntField.UxmlSerializedData$$.ctor
ENTRY_POINT: 058cb720
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_AppUI_UI_Vector2IntField_UxmlSerializedData___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar7;
  undefined1 uStack000000000000000c;
  
  FUN_02f08768(PTR_DAT_067ca3e8);
  FUN_02f08768(Method_System_Collections_Generic_List<Type[]>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
  FUN_02f08768(PTR_DAT_067cc598);
  FUN_02f08768(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
  FUN_02f08768(PTR_DAT_067d7350);
  uVar3 = FUN_02f08768(Method_System_Collections_Generic_List<Type[]>_get_Count__);
  *(undefined1 *)(unaff_x21 + 0x3ef) = 1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  uStack000000000000000c = 0;
  if (iVar2 - 2U < 2) {
    uVar3 = FUN_058ca0c8(uVar3,*(undefined8 *)(unaff_x20 + 0x18));
    return uVar3;
  }
  puVar6 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
  if (iVar2 != 4) {
    if (iVar2 != 1) {
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        uVar4 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_067d7350,0);
        if ((uVar4 & 1) == 0) {
          puVar6 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
          if (*(int *)(unaff_x20 + 0x24) == 0) goto LAB_058cbaa8;
          plVar5 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar5,0);
          uVar7 = *(uint *)(unaff_x20 + 0x24);
          if ((uVar7 >> 7 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>_GetEnumerator__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 6 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>__ctor__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 5 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Type[]>_get_Count__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 4 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)Method_System_Collections_Generic_List<Type[]>_Add__,
                         0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 3 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Matrix4x4[]>_get_Count__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 2 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<Matrix4x4[]>_get_Item__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 1 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>__ctor__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>_ToArray__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          if ((uVar7 >> 0xf & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
          }
          else {
            if (plVar5 == (long *)0x0) goto LAB_058cbbdc;
            iVar2 = FUN_04f789ac(plVar5,0);
            if (0 < iVar2) {
              FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca128,0);
            }
            FUN_04f79730(plVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_List<object[]>_Add__,0);
            uVar7 = *(uint *)(unaff_x20 + 0x24);
          }
          FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067cc598,0);
          puVar1 = PTR_DAT_067da328;
          uStack000000000000000c = (undefined1)uVar7;
          uVar3 = FUN_0505a384(&stack0x0000000c,*(undefined8 *)PTR_DAT_067da328,0);
          FUN_04f79730(plVar5,uVar3,0);
          if (0xff < (int)uVar7) {
            FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067cc628,0);
            uStack000000000000000c = (undefined1)(uVar7 >> 8);
            uVar3 = FUN_0505a384(&stack0x0000000c,*(undefined8 *)puVar1,0);
            FUN_04f79730(plVar5,uVar3,0);
          }
          FUN_04f79730(plVar5,*(undefined8 *)PTR_DAT_067ca3e8,0);
          if ((unaff_x19 & 1) != 0) {
            uVar3 = FUN_0511a510(0);
            FUN_04f79730(plVar5,uVar3,0);
          }
          uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          return uVar3;
        }
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          uVar3 = FUN_04f65e2c(*(undefined8 *)
                                Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                               ,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10),0);
          return uVar3;
        }
      }
LAB_058cbbdc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar6 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
LAB_058cbaa8:
  return *puVar6;
}


