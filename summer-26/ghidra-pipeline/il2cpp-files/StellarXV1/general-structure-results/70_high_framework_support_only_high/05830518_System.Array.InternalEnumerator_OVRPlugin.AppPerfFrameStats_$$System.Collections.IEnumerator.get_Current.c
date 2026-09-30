/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05830518
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  ushort *in_x9;
  int unaff_w19;
  long unaff_x20;
  ulong __n;
  undefined8 *__s;
  undefined8 uVar9;
  long unaff_x26;
  long unaff_x29;
  
  uVar2 = *in_x9;
                    /* try { // try from 0583051c to 05930527 has its CatchHandler @ 05830388 */
  lVar4 = param_1;
  if ((uVar2 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05830514 with catch @ 05830524
                        */
    param_1 = FUN_040b1acc(param_1);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  __s = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc(lVar4);
  }
  piVar3 = (int *)thunk_FUN_040d6b00();
  if (unaff_w19 < *piVar3) {
    iVar1 = unaff_w19;
    while( true ) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      piVar3 = (int *)thunk_FUN_040d6b00();
      if (*piVar3 <= iVar1) break;
      memset(__s,0,__n);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar4 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x20 + 0x20);
      }
      uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
      lVar7 = lVar4;
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
      }
      puVar6 = __s;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
        puVar6 = (undefined8 *)*__s;
      }
      pcVar8 = *(code **)(lVar4 + 0x10);
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      (*pcVar8)(uVar9,lVar4);
      iVar1 = iVar1 + 1;
    }
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if (1 < unaff_w19) {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    plVar5 = (long *)thunk_FUN_040d6b00();
    if (*plVar5 != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      plVar5 = (long *)thunk_FUN_040d6b00();
      if (*plVar5 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_05830808;
      }
      if (unaff_w19 + -1 <= *(int *)(*plVar5 + 0x18)) goto LAB_058307c4;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_040b1acc(lVar7);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_040b1acc(lVar4);
    }
    uVar9 = thunk_FUN_040d6b00();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    (*pcVar8)(uVar9,unaff_w19 + -1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  }
LAB_058307c4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05830808:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


