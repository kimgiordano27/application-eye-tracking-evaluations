/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 0583171c
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


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  void *__src;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  void *unaff_x21;
  undefined8 uVar8;
  ulong __n;
  undefined1 *__dest;
  ulong __n_00;
  code *pcVar9;
  long unaff_x27;
  long unaff_x29;
  
  lVar6 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 05831724 to 05931787 has its CatchHandler @ 05831724
                       catch() { ... } // from try @ 05831724 with catch @ 05831724
                       catch() { ... } // from try @ 05831828 with catch @ 05831724
                       catch() { ... } // from try @ 05831884 with catch @ 05831724
                       catch() { ... } // from try @ 058318c0 with catch @ 05831724 */
  uVar1 = *(ushort *)(lVar6 + 0x135);
  __n = (ulong)*(uint *)(**(long **)(param_1 + 0xc0) + 0xfc);
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  __dest = &stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0) + -(__n + 0xf & 0x1fffffff0);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar6);
  }
  iVar2 = (*pcVar9)();
  memcpy(__dest,unaff_x21,__n);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  piVar4 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
  if (iVar2 < *piVar4) {
    memcpy(__dest,unaff_x21,__n);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    piVar4 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
    if (1 < *piVar4) {
      memcpy(__dest,unaff_x21,__n);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      piVar4 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
      lVar3 = *(long *)(unaff_x20 + 0x20);
      iVar2 = *piVar4;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      FUN_04077674(lVar3,iVar2 + -1);
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc(*(long *)(unaff_x20 + 0x20));
      }
      FUN_03b2820c();
    }
  }
  memcpy(__dest,unaff_x21,__n);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar4 = (int *)thunk_FUN_040d6b00();
  if (0 < *piVar4) {
    memcpy(__dest,unaff_x21,__n);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    __src = (void *)thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20);
    memcpy(&stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0),__src,__n_00);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_040775b0();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  piVar4 = (int *)thunk_FUN_040d6b00();
  if (1 < *piVar4) {
    memcpy(__dest,unaff_x21,__n);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    puVar5 = (undefined8 *)
             thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
    uVar8 = *puVar5;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar5 = (undefined8 *)thunk_FUN_040d6b00();
    uVar7 = *puVar5;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar4 = (int *)thunk_FUN_040d6b00();
    FUN_0769da98(uVar8,uVar7,*piVar4 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


