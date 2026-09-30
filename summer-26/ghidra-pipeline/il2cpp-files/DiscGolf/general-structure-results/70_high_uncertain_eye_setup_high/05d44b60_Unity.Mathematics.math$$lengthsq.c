/*
FUNCTION_NAME: Unity.Mathematics.math$$lengthsq
ENTRY_POINT: 05d44b60
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

long Unity_Mathematics_math__lengthsq(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000068;
  
  puVar1 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__;
                    /* try { // try from 05d44b6c to 05e44b6f has its CatchHandler @ 05d44b88 */
  if ((*(byte *)(unaff_x21 + 0x119) & 1) == 0) {
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__);
    *(undefined1 *)(unaff_x21 + 0x119) = 1;
  }
  in_stack_00000068 = 0;
  iVar3 = FUN_03600604(param_1,*(undefined8 *)puVar1);
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_02d966a4(*(undefined8 *)
                        Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__,iVar3
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
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05d44c58;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(param_1,*(long *)
                                 Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__,0);
LAB_05d44c58:
  plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
  puVar2 = Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__;
  puVar1 = PTR_DAT_069fbff8;
  if (plVar6 != (long *)0x0) {
    uVar10 = 0;
    do {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d44cdc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar1,0);
LAB_05d44cdc:
      uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_05d44e0c;
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_05d44de4;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05d44dcc;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d44d40;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar2,0);
LAB_05d44d40:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      FUN_05d4aa04();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar7 = lVar4 + (long)(int)uVar10 * 0x20;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000008;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000000;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
      LeanTween__value(lVar4 + 0x20 + (long)(int)uVar10 * 0x20,0);
      uVar10 = uVar10 + 1;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05d44dcc:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_05d44e00;
    }
  }
LAB_05d44de4:
  puVar5 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff0,0);
FUN_05d44e00:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_05d44e0c:
  in_stack_00000068 = lVar4;
  LeanTween__value(&stack0x00000068,lVar4);
  return in_stack_00000068;
}


