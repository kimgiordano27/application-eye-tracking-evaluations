/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 0583176c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__src;
  undefined8 *puVar4;
  ushort in_w9;
  long in_x10;
  long unaff_x20;
  undefined8 uVar5;
  void *unaff_x21;
  undefined8 uVar6;
  size_t unaff_x22;
  void *__dest;
  size_t unaff_x24;
  void *__dest_00;
  code *pcVar7;
  long unaff_x27;
  long unaff_x29;
  
  __dest_00 = (void *)(in_x10 - (unaff_x24 + 0xf & 0x1fffffff0));
                    /* try { // try from 05831788 to 0593178f has its CatchHandler @ 05831888 */
  __dest = (void *)((long)__dest_00 - (unaff_x22 + 0xf & 0x1fffffff0));
  lVar2 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xa8);
                    /* try { // try from 058317bc to 05931827 has its CatchHandler @ 0583188c */
  if ((in_w9 & 1) == 0) {
    FUN_040b1acc(lVar2);
  }
  iVar1 = (*pcVar7)();
  memcpy(__dest,unaff_x21,unaff_x22);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  piVar3 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
  if (iVar1 < *piVar3) {
                    /* try { // try from 05831828 to 0593187f has its CatchHandler @ 05831724 */
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    piVar3 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
    if (1 < *piVar3) {
      memcpy(__dest,unaff_x21,unaff_x22);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      piVar3 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
      lVar2 = *(long *)(unaff_x20 + 0x20);
      iVar1 = *piVar3;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      FUN_04077674(lVar2,iVar1 + -1);
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc(*(long *)(unaff_x20 + 0x20));
      }
      FUN_03b2820c();
    }
  }
  memcpy(__dest,unaff_x21,unaff_x22);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar3 = (int *)thunk_FUN_040d6b00();
  if (0 < *piVar3) {
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    __src = (void *)thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
    memcpy(__dest_00,__src,unaff_x24);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_040775b0();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar3 = (int *)thunk_FUN_040d6b00();
  if (1 < *piVar3) {
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    puVar4 = (undefined8 *)
             thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40);
    uVar6 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar4 = (undefined8 *)thunk_FUN_040d6b00();
    uVar5 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar3 = (int *)thunk_FUN_040d6b00();
    FUN_0769da98(uVar6,uVar5,*piVar3 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


