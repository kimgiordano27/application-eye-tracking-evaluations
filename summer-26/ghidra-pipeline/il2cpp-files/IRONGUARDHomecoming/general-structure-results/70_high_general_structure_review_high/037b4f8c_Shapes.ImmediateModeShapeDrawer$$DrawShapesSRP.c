/*
FUNCTION_NAME: Shapes.ImmediateModeShapeDrawer$$DrawShapesSRP
ENTRY_POINT: 037b4f8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Shapes_ImmediateModeShapeDrawer__DrawShapesSRP(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  puVar2 = StringLiteral_667;
  if (*(long *)StringLiteral_667 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_01f116d0(*(long *)StringLiteral_667,*(undefined8 *)(*param_1 + 0x40));
    if (lVar9 == 0) goto LAB_037b5414;
    lVar9 = *(long *)puVar2;
  }
  if ((int)param_1[3] != 0) {
    param_1[4] = lVar9;
    thunk_FUN_01f51358();
    puVar2 = StringLiteral_670;
    if (*(long *)StringLiteral_670 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01f116d0(*(long *)StringLiteral_670,*(undefined8 *)(*param_1 + 0x40));
      if (lVar9 == 0) goto LAB_037b5414;
      lVar9 = *(long *)puVar2;
    }
    if (1 < *(uint *)(param_1 + 3)) {
      param_1[5] = lVar9;
      thunk_FUN_01f51358();
      in_stack_00000018._4_1_ = 1;
      lVar9 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                 ,(long)&stack0x00000018 + 4);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*param_1 + 0x40)), lVar10 == 0)) {
LAB_037b5414:
        uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar11,0);
      }
      if (2 < *(uint *)(param_1 + 3)) {
        param_1[6] = lVar9;
        thunk_FUN_01f51358(param_1 + 6,lVar9);
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
        lVar9 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*param_1 + 0x40)), lVar10 == 0))
        goto LAB_037b5414;
        if (*(uint *)(param_1 + 3) < 4) goto LAB_037b5410;
        param_1[7] = lVar9;
        thunk_FUN_01f51358(param_1 + 7,lVar9);
        uVar11 = FUN_0340f378(*(undefined8 *)StringLiteral_666,param_1,0);
        FUN_037ad7dc(uVar11,*(undefined8 *)StringLiteral_669,uVar11,0);
        lVar9 = *(long *)(unaff_x19 + 0x50);
        if (lVar9 != 0) {
          in_stack_00000040 = *(undefined8 *)(lVar9 + 0x48);
          in_stack_00000038 = *(undefined8 *)(lVar9 + 0x40);
          in_stack_00000030 = *(undefined8 *)(lVar9 + 0x38);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_023a421c(&stack0x00000030,&stack0x00000070,
                                *(undefined8 *)
                                 Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
          if ((uVar12 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
            cVar8 = FUN_037abb7c();
            if (cVar8 != '\0') {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_037b540c;
              uVar11 = thunk_FUN_01f113fc(*(undefined8 *)
                                           Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                         );
              uVar11 = FUN_0340f2f0(*(undefined8 *)StringLiteral_662,uVar11,
                                    *(undefined8 *)StringLiteral_661,0);
              uVar11 = FUN_03405678(uVar11,*(undefined8 *)StringLiteral_664,0);
              uVar13 = FUN_040703d4();
              FUN_037acdb0(uVar13,*(undefined8 *)StringLiteral_669,uVar11,uVar13);
            }
          }
          if (*(int *)(*(long *)Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_0373f924(&stack0x00000070,&stack0x00000060,&stack0x00000050,&stack0x00000048,
                                0);
          puVar2 = 
          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
          ;
          if ((uVar12 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x58) != 0) {
              cVar8 = FUN_037abb7c();
              if (cVar8 == '\0') {
                return;
              }
              uVar11 = FUN_040703d4();
              FUN_037acdb0(uVar11,*(undefined8 *)StringLiteral_669,*(undefined8 *)StringLiteral_663,
                           uVar11);
              return;
            }
          }
          else {
            uVar12 = FUN_03565564(&stack0x00000060,
                                  **(undefined8 **)
                                    (*(long *)
                                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                    + 0xb8),
                                  (*(undefined8 **)
                                    (*(long *)
                                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                    + 0xb8))[1],0);
            if ((uVar12 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
              FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000060,in_stack_00000068,
                           *(undefined8 *)Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__
                          );
            }
            uVar12 = FUN_03565564(&stack0x00000050,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                                  (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1],0);
            if ((uVar12 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
              FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000050,in_stack_00000058,
                           *(undefined8 *)Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__
                          );
            }
            if ((*(long *)(unaff_x19 + 0x40) != 0) &&
               (FUN_02adb64c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_658),
               lVar9 = in_stack_00000048, puVar7 = StringLiteral_668, puVar6 = StringLiteral_665,
               puVar5 = StringLiteral_659, puVar4 = StringLiteral_516,
               puVar3 = Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__,
               in_stack_00000048 != 0)) {
              if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
                uVar12 = 0;
                uVar14 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
                lVar10 = in_stack_00000048 + 0x20;
                do {
                  if (uVar14 <= uVar12) goto LAB_037b5410;
                  puVar1 = (undefined8 *)(lVar10 + uVar12 * 0x10);
                  in_stack_00000028 = puVar1[1];
                  in_stack_00000020 = *puVar1;
                  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
                  cVar8 = FUN_037abb7c();
                  if (cVar8 != '\0') {
                    uVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar2);
                    uVar11 = FUN_0340f2f0(*(undefined8 *)puVar7,*(undefined8 *)puVar6,uVar11,0);
                    uVar13 = FUN_040703d4();
                    FUN_037ad7dc(uVar13,*(undefined8 *)puVar4,uVar11,uVar13);
                  }
                  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_037b540c;
                  FUN_02adb498(*(long *)(unaff_x19 + 0x40),in_stack_00000020,in_stack_00000028,
                               uVar12 & 0xffffffff,*(undefined8 *)puVar5);
                  uVar14 = FUN_03565564(&stack0x00000020,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                                        (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1],0);
                  if ((uVar14 & 1) == 0) {
                    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
                    FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000020,in_stack_00000028,
                                 *(undefined8 *)puVar3);
                  }
                  uVar14 = (ulong)*(uint *)(lVar9 + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
              }
              return;
            }
          }
        }
LAB_037b540c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
LAB_037b5410:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


