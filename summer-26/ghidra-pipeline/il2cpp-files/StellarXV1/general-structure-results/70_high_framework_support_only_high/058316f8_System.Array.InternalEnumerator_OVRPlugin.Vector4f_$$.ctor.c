/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 058316f8
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


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  void *__src;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  void *unaff_x21;
  ulong __n;
  undefined1 *__dest;
  ulong __n_00;
  undefined1 *__dest_00;
  code *pcVar11;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x27 + 0x28);
  lVar9 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar4 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar9 + 0xc0) + 0xfc);
  lVar9 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0xfc);
  __dest_00 = &stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0);
  __dest = __dest_00 + -(__n + 0xf & 0x1fffffff0);
  lVar4 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_040b1acc(lVar9);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0xa8);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  iVar3 = (*pcVar11)(param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8));
  memcpy(__dest,unaff_x21,__n);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  piVar5 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
  if (iVar3 < *piVar5) {
    memcpy(__dest,unaff_x21,__n);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    piVar5 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
    if (1 < *piVar5) {
      memcpy(__dest,unaff_x21,__n);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      piVar5 = (int *)thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
      lVar4 = *(long *)(unaff_x20 + 0x20);
      iVar3 = *piVar5;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      uVar6 = FUN_04077674(lVar4,iVar3 + -1);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      FUN_03b2820c(param_1,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40,uVar6);
    }
  }
  memcpy(__dest,unaff_x21,__n);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  puVar7 = (undefined4 *)
           thunk_FUN_040d6b00(__dest,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *puVar7;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  FUN_03b2ebac(param_1,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80),uVar1);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  piVar5 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
  if (0 < *piVar5) {
    memcpy(__dest,unaff_x21,__n);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    __src = (void *)thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
    memcpy(__dest_00,__src,__n_00);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    FUN_040775b0(param_1,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20,__dest_00,__n_00);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  piVar5 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
  if (1 < *piVar5) {
    memcpy(__dest,unaff_x21,__n);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    puVar8 = (undefined8 *)
             thunk_FUN_040d6b00(__dest,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar6 = *puVar8;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    puVar8 = (undefined8 *)
             thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar10 = *puVar8;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    piVar5 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
    FUN_0769da98(uVar6,uVar10,*piVar5 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


