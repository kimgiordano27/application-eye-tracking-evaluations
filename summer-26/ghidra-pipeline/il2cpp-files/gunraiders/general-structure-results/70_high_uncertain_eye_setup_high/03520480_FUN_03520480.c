/*
FUNCTION_NAME: FUN_03520480
ENTRY_POINT: 03520480
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x035205dc) */

uint FUN_03520480(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  char local_38 [4];
  undefined1 local_34 [4];
  undefined8 local_28;
  
  local_34[0] = param_2;
  local_28 = param_4;
  if ((DAT_04537713 & 1) == 0) {
    FUN_01c5d288(Method_System_Memory<byte>_op_Implicit__);
    FUN_01c5d288(Method_System_Memory<byte>_get_Span__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_042388e8);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DAT_04537713 = 1;
  }
  local_38[0] = '\0';
  lVar5 = *(long *)(param_1 + 0xd0);
  if ((param_4 >> 0x20 & 1) == 0) {
    if (lVar5 == 0) goto LAB_035208c8;
  }
  else {
    if (lVar5 == 0) goto LAB_035208c8;
    if ((*(char *)(lVar5 + 0xdd) == '\0') && (*(char *)(lVar5 + 0x20) != '\x05')) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar9 = thunk_FUN_01c496e0();
      uVar2 = thunk_FUN_01c273e8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__)
      ;
      FUN_032467a0(uVar9,uVar2,0);
      uVar2 = thunk_FUN_01c273e8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar2);
    }
  }
  if (*(char *)(lVar5 + 0x40) == '\x03') {
    if (((uint)(param_4 >> 0x28) & 0xff) < (uint)*(byte *)(param_1 + 0x72)) {
      uVar9 = *(undefined8 *)(param_1 + 0xe8);
      local_38[0] = '\0';
      FUN_0333497c(uVar9,local_38,0);
      if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = FUN_03518b80(*(long *)(param_1 + 0xd0),local_34[0],param_3,2,local_28._4_1_ & 1,0);
      plVar3 = *(long **)(param_1 + 0xd0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(0,uVar2);
      }
      uVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,uVar2,local_28,*(undefined8 *)(*plVar3 + 0x230))
      ;
      if (local_38[0] != '\0') {
        thunk_FUN_01c216e8(uVar9,0);
      }
      goto LAB_035208b0;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
      if (lVar5 == 0) goto LAB_035208c8;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_035208cc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
      uVar9 = FUN_0324bc50((ulong)&local_28 | 5,0);
      if ((*(uint *)(lVar5 + 0x18) < 2) ||
         (*(undefined8 *)(lVar5 + 0x28) = uVar9, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_035208cc;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
      uVar9 = FUN_0324bc50((byte *)(param_1 + 0x72),0);
      if ((*(uint *)(lVar5 + 0x18) < 4) ||
         (*(undefined8 *)(lVar5 + 0x38) = uVar9, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_035208cc;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_042388e8;
      uVar9 = FUN_031533cc(lVar5,0);
      if (plVar3 == (long *)0x0) goto LAB_035208c8;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)Method_System_Memory<byte>_get_Span__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03520828;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)Method_System_Memory<byte>_get_Span__,0);
LAB_03520828:
      (*(code *)*puVar4)(plVar3,1,uVar9,puVar4[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) goto LAB_035208c8;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)Method_System_Memory<byte>_get_Span__;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0352088c;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      uVar9 = FUN_0324bc50(local_34,0);
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_035208c8;
      local_50 = *(undefined8 *)Method_System_Memory<byte>_op_Implicit__;
      uStack_48 = 0xffffffffffffffff;
      local_40 = *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x40);
      uVar2 = FUN_03307544(&local_50,0);
      uVar9 = FUN_031532c4(*(undefined8 *)
                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__,uVar9,
                           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__,
                           uVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_035208c8;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)Method_System_Memory<byte>_get_Span__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_035207c4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)Method_System_Memory<byte>_get_Span__,0);
LAB_035207c4:
      (*(code *)*puVar4)(plVar3,1,uVar9,puVar4[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
LAB_035208c8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)Method_System_Memory<byte>_get_Span__;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0352088c;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_01c72498(plVar3,lVar5,2);
LAB_0352089c:
  (*(code *)*puVar4)(plVar3,0x406,puVar4[1]);
  uVar1 = 0;
LAB_035208b0:
  return uVar1 & 1;
LAB_0352088c:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
  goto LAB_0352089c;
}


