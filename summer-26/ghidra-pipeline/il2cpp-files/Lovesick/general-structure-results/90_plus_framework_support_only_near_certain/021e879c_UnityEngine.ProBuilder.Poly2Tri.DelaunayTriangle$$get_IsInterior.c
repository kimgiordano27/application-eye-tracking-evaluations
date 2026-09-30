/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle$$get_IsInterior
ENTRY_POINT: 021e879c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_ProBuilder_Poly2Tri_DelaunayTriangle__get_IsInterior(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_CY;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  uint uVar10;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar11;
  long lVar12;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined2 uStack00000000000001b0;
  undefined8 in_stack_000001b8;
  undefined *puVar7;
  
  while (!(bool)in_CY) {
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    FUN_021f605c(&stack0x000000d0,*(undefined8 *)(unaff_x25 + unaff_x24 * 8),0);
    _uStack00000000000001b0 = in_stack_000000d0;
    in_stack_000001b8 = in_stack_000000d8;
    FUN_012f3a6c();
    puVar7 = StringLiteral_9027;
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x24) {
      uVar3 = FUN_015ff8a0(unaff_x19[4],0);
      puVar2 = 
      Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__
      ;
      if ((uVar3 & 1) == 0) {
        if (unaff_x19[4] == 0) goto LAB_021e8a04;
        uVar4 = FUN_01604018(unaff_x19[4],0);
        uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)puVar2,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = *(undefined8 *)puVar7;
          in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
LAB_021e885c:
          _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
          FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar4);
          *(undefined2 *)(unaff_x20 + 0x40) = uStack00000000000001b0;
          goto LAB_021e8870;
        }
        uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)StringLiteral_13303,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = *(undefined8 *)puVar7;
          in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
          goto LAB_021e885c;
        }
        uVar8 = unaff_x19[4];
        uVar4 = thunk_FUN_00d48444(PTR_DAT_033ee020);
        puVar7 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
LAB_021e8bdc:
        uVar6 = thunk_FUN_00d48444(puVar7);
        uVar4 = FUN_01600424(uVar4,uVar8,uVar6,0);
        goto LAB_021e8a28;
      }
LAB_021e8870:
      uVar3 = FUN_015ff8a0(unaff_x19[5],0);
      puVar2 = OVRPlugin_OVRP_1_105_0_TypeInfo;
      if ((uVar3 & 1) == 0) {
        if (unaff_x19[5] == 0) goto LAB_021e8a04;
        uVar4 = FUN_01604018(unaff_x19[5],0);
        uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)puVar2,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)
                                            Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                     ,0);
          if ((uVar3 & 1) == 0) {
            uVar8 = unaff_x19[4];
            uVar4 = thunk_FUN_00d48444(StringLiteral_13200);
            puVar7 = System_Collections_Generic_List<HandGrabPose>_TypeInfo;
            goto LAB_021e8bdc;
          }
          uVar4 = *(undefined8 *)puVar7;
          in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
        }
        else {
          uVar4 = *(undefined8 *)puVar7;
          in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
        }
        _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
        FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar4);
        FUN_021e7090();
      }
      if (unaff_x19[0xc] == 0) {
        return;
      }
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
      if (lVar5 == 0) goto LAB_021e8a04;
      FUN_01320e50(lVar5,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
      lVar9 = unaff_x19[0xc];
      if (lVar9 == 0) goto LAB_021e8a04;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar1 < 1) goto LAB_021e89cc;
      uVar10 = 0;
      lVar12 = 0;
      goto LAB_021e895c;
    }
    in_CY = *(uint *)(unaff_x23 + 0x18) <= unaff_x24;
  }
LAB_021e8a08:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
LAB_021e895c:
  if (uVar1 <= uVar10) goto LAB_021e8a08;
  lVar11 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
  if (lVar11 == 0) {
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = FUN_015ff8a0(*(undefined8 *)(lVar11 + 0x10),0);
  if ((uVar3 & 1) == 0) {
    lVar12 = lVar11;
  }
  if ((uVar3 & 1) != 0) {
    uVar8 = *unaff_x19;
    uVar4 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
    uVar4 = FUN_015f5b28(uVar4,uVar8,0);
LAB_021e8a28:
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar8,uVar4,0);
    uVar4 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar4);
  }
  if (lVar12 == 0) goto LAB_021e8a04;
  FUN_021ecf78(&stack0x000000e0);
  memcpy(&stack0x00000000,&stack0x000000e0,0xd0);
  FUN_00c66f98(lVar5);
  uVar1 = *(uint *)(lVar9 + 0x18);
  uVar10 = uVar10 + 1;
  lVar12 = lVar11;
  if ((int)uVar1 <= (int)uVar10) {
LAB_021e89cc:
    uVar4 = FUN_01325140(lVar5,*(undefined8 *)StringLiteral_11254);
    *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
    return;
  }
  goto LAB_021e895c;
}


