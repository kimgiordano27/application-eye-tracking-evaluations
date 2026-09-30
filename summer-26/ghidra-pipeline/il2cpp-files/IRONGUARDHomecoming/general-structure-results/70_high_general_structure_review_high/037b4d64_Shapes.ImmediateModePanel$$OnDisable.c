/*
FUNCTION_NAME: Shapes.ImmediateModePanel$$OnDisable
ENTRY_POINT: 037b4d64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Shapes_ImmediateModePanel__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar15;
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
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(StringLiteral_660);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(StringLiteral_527);
  thunk_FUN_01efb3a4(StringLiteral_528);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_ReleaseResource__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_ShouldReleaseResource__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                    );
  thunk_FUN_01efb3a4(StringLiteral_516);
  thunk_FUN_01efb3a4(StringLiteral_661);
  thunk_FUN_01efb3a4(StringLiteral_662);
  thunk_FUN_01efb3a4(StringLiteral_663);
  thunk_FUN_01efb3a4(StringLiteral_664);
  thunk_FUN_01efb3a4(StringLiteral_665);
  thunk_FUN_01efb3a4(StringLiteral_666);
  thunk_FUN_01efb3a4(StringLiteral_667);
  thunk_FUN_01efb3a4(StringLiteral_668);
  thunk_FUN_01efb3a4(StringLiteral_669);
  thunk_FUN_01efb3a4(StringLiteral_670);
  *(undefined1 *)(unaff_x20 + 0x598) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_02ea9d90(*(long *)(unaff_x19 + 0x60),*(undefined8 *)StringLiteral_533);
    puVar2 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
    ;
    puVar1 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_ShouldReleaseResource__
    ;
    lVar13 = *(long *)(unaff_x19 + 0x50);
    if (lVar13 == 0) goto LAB_037b540c;
    in_stack_00000040 = *(undefined8 *)(lVar13 + 0x48);
    in_stack_00000038 = *(undefined8 *)(lVar13 + 0x40);
    in_stack_00000030 = *(undefined8 *)(lVar13 + 0x38);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_023a3cbc(&stack0x00000030,&stack0x00000078,*(undefined8 *)puVar1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_ReleaseResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar13 = FUN_03740048(&stack0x00000078,0);
    puVar1 = Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__;
    if (lVar13 == 0) goto LAB_037b540c;
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar8 = 0;
      uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      puVar15 = (undefined8 *)(lVar13 + 0x28);
      do {
        if (uVar14 <= uVar8) goto LAB_037b5410;
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
        FUN_02eaa930(*(long *)(unaff_x19 + 0x60),puVar15[-1],*puVar15,*(undefined8 *)puVar1);
        uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar8 = uVar8 + 1;
        puVar15 = puVar15 + 2;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
    cVar7 = FUN_037abb7c();
    if (cVar7 != '\0') {
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,4);
      puVar1 = StringLiteral_667;
      if (plVar9 == (long *)0x0) goto LAB_037b540c;
      if (*(long *)StringLiteral_667 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = thunk_FUN_01f116d0(*(long *)StringLiteral_667,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar13 == 0) goto LAB_037b5414;
        lVar13 = *(long *)puVar1;
      }
      if ((int)plVar9[3] == 0) {
LAB_037b5410:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9[4] = lVar13;
      thunk_FUN_01f51358();
      puVar1 = StringLiteral_670;
      if (*(long *)StringLiteral_670 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = thunk_FUN_01f116d0(*(long *)StringLiteral_670,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar13 == 0) goto LAB_037b5414;
        lVar13 = *(long *)puVar1;
      }
      if (*(uint *)(plVar9 + 3) < 2) goto LAB_037b5410;
      plVar9[5] = lVar13;
      thunk_FUN_01f51358();
      in_stack_00000018._4_1_ = 1;
      lVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                  ,(long)&stack0x00000018 + 4);
      if ((lVar13 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_037b5414:
        uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar11,0);
      }
      if (*(uint *)(plVar9 + 3) < 3) goto LAB_037b5410;
      plVar9[6] = lVar13;
      thunk_FUN_01f51358(plVar9 + 6,lVar13);
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
      lVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 );
      if ((lVar13 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_037b5414;
      if (*(uint *)(plVar9 + 3) < 4) goto LAB_037b5410;
      plVar9[7] = lVar13;
      thunk_FUN_01f51358(plVar9 + 7,lVar13);
      uVar11 = FUN_0340f378(*(undefined8 *)StringLiteral_666,plVar9,0);
      FUN_037ad7dc(uVar11,*(undefined8 *)StringLiteral_669,uVar11,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0x50);
    if (lVar13 != 0) {
      in_stack_00000040 = *(undefined8 *)(lVar13 + 0x48);
      in_stack_00000038 = *(undefined8 *)(lVar13 + 0x40);
      in_stack_00000030 = *(undefined8 *)(lVar13 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_023a421c(&stack0x00000030,&stack0x00000070,
                           *(undefined8 *)
                            Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
        cVar7 = FUN_037abb7c();
        if (cVar7 != '\0') {
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_037b540c;
          uVar11 = thunk_FUN_01f113fc(*(undefined8 *)
                                       Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                     );
          uVar11 = FUN_0340f2f0(*(undefined8 *)StringLiteral_662,uVar11,
                                *(undefined8 *)StringLiteral_661,0);
          uVar11 = FUN_03405678(uVar11,*(undefined8 *)StringLiteral_664,0);
          uVar12 = FUN_040703d4();
          FUN_037acdb0(uVar12,*(undefined8 *)StringLiteral_669,uVar11,uVar12);
        }
      }
      if (*(int *)(*(long *)Method_UnityEngine_Splines_SplineDataDictionary<float4>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_0373f924(&stack0x00000070,&stack0x00000060,&stack0x00000050,&stack0x00000048,0);
      puVar1 = 
      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
      ;
      if ((uVar8 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
        cVar7 = FUN_037abb7c();
        if (cVar7 != '\0') {
          uVar11 = FUN_040703d4();
          FUN_037acdb0(uVar11,*(undefined8 *)StringLiteral_669,*(undefined8 *)StringLiteral_663,
                       uVar11);
        }
      }
      else {
        uVar8 = FUN_03565564(&stack0x00000060,
                             **(undefined8 **)
                               (*(long *)
                                 Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                               + 0xb8),
                             (*(undefined8 **)
                               (*(long *)
                                 Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                               + 0xb8))[1],0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
          FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000060,in_stack_00000068,
                       *(undefined8 *)Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__);
        }
        uVar8 = FUN_03565564(&stack0x00000050,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                             (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1],0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
          FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000050,in_stack_00000058,
                       *(undefined8 *)Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__);
        }
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (FUN_02adb64c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_658),
           lVar13 = in_stack_00000048, puVar6 = StringLiteral_668, puVar5 = StringLiteral_665,
           puVar4 = StringLiteral_659, puVar3 = StringLiteral_516,
           puVar2 = Method_Unity_VisualScripting_Flow_FetchValue<GameObject>__,
           in_stack_00000048 == 0)) goto LAB_037b540c;
        if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
          uVar8 = 0;
          uVar14 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
          lVar10 = in_stack_00000048 + 0x20;
          do {
            if (uVar14 <= uVar8) goto LAB_037b5410;
            puVar15 = (undefined8 *)(lVar10 + uVar8 * 0x10);
            in_stack_00000028 = puVar15[1];
            in_stack_00000020 = *puVar15;
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_037b540c;
            cVar7 = FUN_037abb7c();
            if (cVar7 != '\0') {
              uVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar1);
              uVar11 = FUN_0340f2f0(*(undefined8 *)puVar6,*(undefined8 *)puVar5,uVar11,0);
              uVar12 = FUN_040703d4();
              FUN_037ad7dc(uVar12,*(undefined8 *)puVar3,uVar11,uVar12);
            }
            if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_037b540c;
            FUN_02adb498(*(long *)(unaff_x19 + 0x40),in_stack_00000020,in_stack_00000028,
                         uVar8 & 0xffffffff,*(undefined8 *)puVar4);
            uVar14 = FUN_03565564(&stack0x00000020,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                                  (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1],0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_037b540c;
              FUN_02eaa930(*(long *)(unaff_x19 + 0x60),in_stack_00000020,in_stack_00000028,
                           *(undefined8 *)puVar2);
            }
            uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
        }
      }
      return;
    }
  }
LAB_037b540c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


