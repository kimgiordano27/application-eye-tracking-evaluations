/*
FUNCTION_NAME: FUN_05d44b48
ENTRY_POINT: 05d44b48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d44e58) */
/* WARNING: Removing unreachable block (ram,0x05d44e18) */

long FUN_05d44b48(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  long **pplStack_50;
  long *local_48;
  long local_38;
  
  puVar1 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__;
  if ((DAT_06dc3119 & 1) == 0) {
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__);
    DAT_06dc3119 = 1;
  }
  local_38 = 0;
  local_48 = (long *)0x0;
  iVar4 = FUN_03600604(param_1,*(undefined8 *)puVar1);
  if (iVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_02d966a4(*(undefined8 *)
                        Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__,iVar4
                      );
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05d44c58;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(param_1,*(long *)
                                 Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__,0);
LAB_05d44c58:
  local_48 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar2 = Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__;
  puVar1 = PTR_DAT_069fbff8;
  pplStack_50 = &local_48;
  local_58 = 0;
  if (local_48 != (long *)0x0) {
    uVar10 = 0;
    do {
      plVar3 = local_48;
      lVar7 = *local_48;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d44cdc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(local_48,*(long *)puVar1,0);
LAB_05d44cdc:
      uVar8 = (*(code *)*puVar6)(plVar3,puVar6[1]);
      plVar3 = local_48;
      if ((uVar8 & 1) == 0) {
        if (local_48 == (long *)0x0) goto LAB_05d44e0c;
        lVar7 = *local_48;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_05d44de4;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05d44dcc;
      }
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *local_48;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d44d40;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(local_48,*(long *)puVar2,0);
LAB_05d44d40:
      (*(code *)*puVar6)(plVar3,puVar6[1]);
      FUN_05d4aa04(&local_a0);
      uStack_78 = uStack_98;
      local_80 = local_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar7 = lVar5 + (long)(int)uVar10 * 0x20;
      *(undefined8 *)(lVar7 + 0x28) = uStack_98;
      *(undefined8 *)(lVar7 + 0x20) = local_a0;
      *(undefined8 *)(lVar7 + 0x38) = uStack_88;
      *(undefined8 *)(lVar7 + 0x30) = uStack_90;
      LeanTween__value(lVar5 + 0x20 + (long)(int)uVar10 * 0x20,0);
      uVar10 = uVar10 + 1;
    } while (local_48 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05d44dcc:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_05d44e00;
    }
  }
LAB_05d44de4:
  puVar6 = (undefined8 *)FUN_02dd004c(local_48,*(long *)PTR_DAT_069fbff0,0);
FUN_05d44e00:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
LAB_05d44e0c:
  local_38 = lVar5;
  LeanTween__value(&local_38,lVar5);
  return local_38;
}


