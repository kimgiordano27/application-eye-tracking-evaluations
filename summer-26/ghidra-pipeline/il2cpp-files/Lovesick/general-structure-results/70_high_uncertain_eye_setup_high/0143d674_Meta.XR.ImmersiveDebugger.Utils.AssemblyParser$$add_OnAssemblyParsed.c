/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$add_OnAssemblyParsed
ENTRY_POINT: 0143d674
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__add_OnAssemblyParsed(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *unaff_x19;
  long lVar4;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar5;
  long unaff_x25;
  long unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *unaff_x29;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  long in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
  int iStack00000000000000d8;
  int iStack00000000000000dc;
  
  while (lVar1 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40)), param_2 = unaff_x24,
        lVar1 != 0) {
    do {
      if (*(uint *)(unaff_x23 + 3) < 0x12) {
LAB_0143d758:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x23[0x15] = param_2;
      uVar2 = FUN_01600844(unaff_x23,0);
      lVar5 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar1 = *(long *)(lVar5 + 0x38);
      if (lVar1 == 0) {
        FUN_00d59478(lVar5);
        lVar1 = *(long *)(lVar5 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        lVar1 = FUN_00d5941c();
      }
      FUN_013f38b0(uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
      do {
        in_stack_000000b8 = in_stack_000000b8 + 1;
        if (*(int *)(unaff_x25 + 0x18) <= (int)in_stack_000000b8) {
          FUN_014359a0();
          return;
        }
        FUN_0132138c(unaff_x25,in_stack_000000b8,&stack0x00000088,*unaff_x19);
        uVar3 = in_stack_000000b8;
        lVar1 = _uStack0000000000000088;
        if (_uStack0000000000000088 == 0) goto thunk_FUN_00da518c;
        lVar5 = *(long *)(unaff_x22 + 0x20);
        lVar4 = (long)(int)in_stack_000000b8;
        if (*(int *)(unaff_x26 + 0x18) == 1) {
          fVar7 = (float)*(int *)(_uStack0000000000000088 + 0x20) / (float)iStack00000000000000d8;
          fVar6 = (float)*(int *)(_uStack0000000000000088 + 0x1c) / (float)iStack00000000000000dc +
                  unaff_s9;
        }
        else {
          fVar7 = unaff_s8 +
                  (float)*(int *)(_uStack0000000000000088 + 0x20) / (float)iStack00000000000000d8;
          fVar6 = (float)*(int *)(_uStack0000000000000088 + 0x1c) / (float)iStack00000000000000dc;
        }
        in_stack_00000090 = 0;
        _uStack0000000000000088 = 0;
        FUN_0268834c(fVar6,fVar7,&stack0x00000088,0);
        if (lVar5 == 0) goto thunk_FUN_00da518c;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0143d758;
        uStack00000000000000b4 = *unaff_x27;
        uStack00000000000000ac = *unaff_x29;
        uStack00000000000000b0 = *unaff_x28;
        lVar5 = lVar5 + lVar4 * 0x10;
        *(undefined4 *)(lVar5 + 0x20) = uStack0000000000000088;
        *(undefined4 *)(lVar5 + 0x24) = uStack00000000000000ac;
        *(undefined4 *)(lVar5 + 0x28) = uStack00000000000000b0;
        *(undefined4 *)(lVar5 + 0x2c) = uStack00000000000000b4;
        uStack00000000000000a8 = uStack0000000000000088;
        lVar5 = *(long *)(unaff_x22 + 0x30);
        if (lVar5 == 0) goto thunk_FUN_00da518c;
        if (*(uint *)(lVar5 + 0x18) <= in_stack_000000b8) goto LAB_0143d758;
        *(undefined4 *)(lVar5 + (long)(int)in_stack_000000b8 * 4 + 0x20) =
             *(undefined4 *)(lVar1 + 0x10);
      } while (*(int *)(unaff_x26 + 0x10) < 4);
      unaff_x23 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x12);
      if (unaff_x23 == (long *)0x0) {
thunk_FUN_00da518c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0) &&
         (lVar5 = thunk_FUN_00d6225c(*(long *)
                                      Method_UnityEngine_Component_GetComponent<NavMeshSurface>__,
                                     *(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      if ((int)unaff_x23[3] == 0) goto LAB_0143d758;
      unaff_x23[4] = *(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
      lVar5 = FUN_0176eb1c(&stack0x000000b8,0);
      if ((lVar5 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 2) goto LAB_0143d758;
      unaff_x23[5] = lVar5;
      if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
        lVar5 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_List<Link>_TypeInfo,
                                   *(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar5 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 3) goto LAB_0143d758;
      unaff_x23[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
      lVar1 = FUN_0176eb1c((undefined4 *)(lVar1 + 0x10),0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 4) goto LAB_0143d758;
      unaff_x23[7] = lVar1;
      if (*(long *)System_Xml_Serialization_XmlCustomFormatter_TypeInfo != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)System_Xml_Serialization_XmlCustomFormatter_TypeInfo,
                                   *(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 5) goto LAB_0143d758;
      unaff_x23[8] = *(long *)System_Xml_Serialization_XmlCustomFormatter_TypeInfo;
      in_stack_000000a0._4_4_ = (float)FUN_02688390(&stack0x000000a8,0);
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ * (float)iStack00000000000000dc;
      lVar1 = FUN_017840ac((long)&stack0x000000a0 + 4,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 6) goto LAB_0143d758;
      unaff_x23[9] = lVar1;
      if (*(long *)StringLiteral_9909 != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)StringLiteral_9909,*(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 7) goto LAB_0143d758;
      unaff_x23[10] = *(long *)StringLiteral_9909;
      in_stack_000000a0._4_4_ = (float)FUN_026883a0(&stack0x000000a8,0);
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ * (float)iStack00000000000000d8;
      lVar1 = FUN_017840ac((long)&stack0x000000a0 + 4,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 8) goto LAB_0143d758;
      unaff_x23[0xb] = lVar1;
      if (*(long *)PTR_DAT_033f5960 != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 9) goto LAB_0143d758;
      unaff_x23[0xc] = *(long *)PTR_DAT_033f5960;
      in_stack_000000a0._4_4_ = (float)FUN_026884c4(&stack0x000000a8,0);
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ * (float)iStack00000000000000dc;
      lVar1 = FUN_017840ac((long)&stack0x000000a0 + 4,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 10) goto LAB_0143d758;
      unaff_x23[0xd] = lVar1;
      if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                   *(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 0xb) goto LAB_0143d758;
      unaff_x23[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
      in_stack_000000a0._4_4_ = (float)FUN_026884d4(&stack0x000000a8,0);
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ * (float)iStack00000000000000d8;
      lVar1 = FUN_017840ac((long)&stack0x000000a0 + 4,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 0xc) goto LAB_0143d758;
      unaff_x23[0xf] = lVar1;
      if (*(long *)Method_System_Collections_Generic_List<Edge>_ToArray__ != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)Method_System_Collections_Generic_List<Edge>_ToArray__,
                                   *(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 0xd) goto LAB_0143d758;
      unaff_x23[0x10] = *(long *)Method_System_Collections_Generic_List<Edge>_ToArray__;
      FUN_0132138c();
      in_stack_00000090 = 0xffffffffffffffff;
      in_stack_00000098 = _uStack0000000000000088;
      _uStack0000000000000088 = *(long *)PTR_DAT_033f05c0;
      lVar1 = FUN_017cc6f4(&stack0x00000088,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 0xe) goto LAB_0143d758;
      unaff_x23[0x11] = lVar1;
      if (*(long *)StringLiteral_2477 != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)StringLiteral_2477,*(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 0xf) goto LAB_0143d758;
      unaff_x23[0x12] = *(long *)StringLiteral_2477;
      lVar1 = FUN_0176eb1c((long)&stack0x000000d8 + 4,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_0143d760;
      uVar3 = *(uint *)(unaff_x23 + 3);
      if (uVar3 < 0x10) goto LAB_0143d758;
      unaff_x23[0x13] = lVar1;
      if (*(long *)PTR_DAT_033eb498 != 0) {
        lVar1 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033eb498,*(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar1 == 0) goto LAB_0143d760;
        uVar3 = *(uint *)(unaff_x23 + 3);
      }
      if (uVar3 < 0x11) goto LAB_0143d758;
      unaff_x23[0x14] = *(long *)PTR_DAT_033eb498;
      param_2 = FUN_0176eb1c(&stack0x000000d8,0);
      unaff_x25 = in_stack_00000080;
    } while (param_2 == 0);
    param_1 = *unaff_x23;
    unaff_x24 = param_2;
  }
LAB_0143d760:
  uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,0);
}


