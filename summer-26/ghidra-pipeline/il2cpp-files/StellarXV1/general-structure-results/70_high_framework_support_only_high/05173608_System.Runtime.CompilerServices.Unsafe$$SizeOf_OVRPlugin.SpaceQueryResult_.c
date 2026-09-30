/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 05173608
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Runtime_CompilerServices_Unsafe__SizeOf<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar10;
  
                    /* try { // try from 05173608 to 0527360b has its CatchHandler @ 05173614 */
  lVar1 = *(long *)(param_1 + 8);
                    /* try { // try from 0517360c to 05273617 has its CatchHandler @ 051733d0 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
LAB_0517395c:
    uVar4 = 0;
    uVar8 = 2;
    goto LAB_051739b4;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_04ed8e4c(*(undefined8 *)(lVar10 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_05173a4c;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x20,unaff_x20[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto LAB_051739b4;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0768890c(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar1);
    }
    uVar5 = thunk_FUN_0408781c();
    uVar3 = FUN_07692be0(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_05173968;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_0408781c();
    uVar3 = FUN_08a67ec8(uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_0517395c;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_0408781c();
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8d20);
    }
    plVar2 = (long *)UnityEngine_UIElements_UIEventRegistration__TakeCapture(uVar4,0);
    if (plVar2 == (long *)0x0) goto LAB_051739b0;
    plVar6 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
    lVar1 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b8d88) {
          puVar7 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto Unity_Burst_Unsafe__Copy<__Il2CppFullySharedGenericType>;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_092b8d88,1);
Unity_Burst_Unsafe__Copy<__Il2CppFullySharedGenericType>:
    (*(code *)*puVar7)(plVar2);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc(lVar1);
    }
    if (plVar6 == (long *)0x0) {
LAB_05173a4c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar6);
    }
    puVar7 = (undefined8 *)thunk_FUN_040b5044();
    uVar4 = *puVar7;
    unaff_x20[1] = puVar7[1];
    *unaff_x20 = uVar4;
    thunk_FUN_040ec700(unaff_x20 + 1,0);
  }
  else {
LAB_05173968:
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = FUN_0515f0d0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 == 0) {
LAB_051739b0:
      uVar4 = 0;
      uVar8 = 3;
      goto LAB_051739b4;
    }
    FUN_0513ea9c();
  }
  uVar8 = 0;
  uVar4 = 1;
LAB_051739b4:
  *unaff_x19 = uVar8;
  return uVar4;
}


