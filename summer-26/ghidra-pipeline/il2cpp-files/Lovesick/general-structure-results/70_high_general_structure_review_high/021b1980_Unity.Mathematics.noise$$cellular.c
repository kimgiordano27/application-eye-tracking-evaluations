/*
FUNCTION_NAME: Unity.Mathematics.noise$$cellular
ENTRY_POINT: 021b1980
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_noise__cellular(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *unaff_x20;
  int iVar18;
  uint uVar19;
  undefined8 unaff_x29;
  undefined1 auVar20 [16];
  long lStack0000000000000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined4 uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lStack0000000000000010 = param_1;
  lVar8 = thunk_FUN_00d62348(*unaff_x20);
  puVar2 = System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo;
                    /* try { // try from 021b198c to 022b1997 has its CatchHandler @ 021b1860 */
  if (lVar8 != 0) {
                    /* try { // try from 021b1998 to 022b199f has its CatchHandler @ 021b19a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021b197c with catch @ 021b19a0
                       catch(type#2 @ 00000000) { ... } // from try @ 021b1998 with catch @ 021b19a0
                        */
    FUN_01320e50(lVar8,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
                    /* try { // try from 021b19a4 to 022b1ac7 has its CatchHandler @ 021b19a4
                       catch() { ... } // from try @ 021b19a4 with catch @ 021b19a4
                       catch() { ... } // from try @ 021b1aec with catch @ 021b19a4
                       catch() { ... } // from try @ 021b1b6c with catch @ 021b19a4
                       catch() { ... } // from try @ 021b1b9c with catch @ 021b19a4 */
    lVar9 = thunk_FUN_00d62348(*unaff_x20);
    if (lVar9 != 0) {
      FUN_01320e50(lVar9,*(undefined8 *)puVar2);
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
      puVar5 = Method_System_Span<byte>_ToArray__;
      puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
      puVar2 = 
      Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__;
      lVar15 = *(long *)(in_stack_00000018 + 0x20);
      if (lVar15 != 0) {
        uVar19 = 0;
        iVar18 = 0;
        do {
          lVar15 = *(long *)(lVar15 + 0x30);
          if (lVar15 == 0) break;
          if (*(int *)(lVar15 + 0x18) <= iVar18) {
            FUN_021ec2ec(unaff_x29,0);
            return;
          }
          FUN_0132138c(lVar15,iVar18,&stack0x00000020,
                       *(undefined8 *)Method_System_Threading_SpinLock_ExitSlowPath__);
          uVar7 = uStack0000000000000034;
          uVar13 = uStack0000000000000030;
          lVar15 = in_stack_00000028;
          uVar12 = in_stack_00000020;
          lVar17 = *(long *)
                    Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
          if ((uVar10 & 1) == 0) {
            *(undefined4 *)(lVar9 + 0x18) = 0;
          }
          else {
            iVar1 = *(int *)(lVar9 + 0x18);
            *(undefined4 *)(lVar9 + 0x18) = 0;
            if (0 < iVar1) {
              FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
            }
          }
          if (lVar15 != 0) {
            FUN_01323390(lVar15,&stack0x00000020,
                         *(undefined8 *)
                          Method_UnityEngine_ProBuilder_ArrayUtility_Fill<List<Vertex>>__);
            in_stack_00000060 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
            in_stack_00000058 = in_stack_00000028;
            in_stack_00000050 = in_stack_00000020;
            while( true ) {
              uVar10 = FUN_012b894c(&stack0x00000050,*(undefined8 *)puVar5);
              if ((uVar10 & 1) == 0) break;
                    /* try { // try from 021b1ac8 to 022b1acb has its CatchHandler @ 021b1b4c */
              uVar11 = FUN_00c625c8(&stack0x00000050,*(undefined8 *)puVar2);
                    /* try { // try from 021b1ad4 to 022b1aeb has its CatchHandler @ 021b1b50 */
              uVar10 = FUN_015ff8a0(uVar11,0);
              if ((uVar10 & 1) == 0) {
                    /* try { // try from 021b1aec to 022b1b67 has its CatchHandler @ 021b19a4 */
                FUN_00ac1158(lVar9,uVar11,*(undefined8 *)puVar6);
              }
            }
            FUN_012b8948(&stack0x00000050,*(undefined8 *)StringLiteral_11241);
          }
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar15 = FUN_021b0e2c(uVar12,1);
          if (lStack0000000000000010 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b1ac8 with catch @ 021b1b4c
                        */
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                        + 0xe0) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b1ad4 with catch @ 021b1b50
                        */
              thunk_FUN_00d32864();
            }
            lVar15 = FUN_021b13f0(lStack0000000000000010,lVar15);
          }
          if (lVar15 == 0) break;
                    /* try { // try from 021b1b68 to 022b1b6b has its CatchHandler @ 021b1b8c */
                    /* try { // try from 021b1b6c to 022b1b8f has its CatchHandler @ 021b19a4 */
          lVar15 = FUN_01604018(lVar15,0);
          if (lVar15 == 0) break;
          uVar10 = FUN_01604784(lVar15,0x2f,0);
          if ((uVar10 & 1) != 0) {
                    /* catch() { ... } // from try @ 021b1b68 with catch @ 021b1b8c */
                    /* try { // try from 021b1b90 to 022b1b9b has its CatchHandler @ 021b1bb0 */
            uVar12 = FUN_021b1590(uVar10,lVar15);
                    /* try { // try from 021b1b9c to 022b1ba7 has its CatchHandler @ 021b19a4 */
                    /* try { // try from 021b1ba8 to 022b1baf has its CatchHandler @ 021b1bb0 */
            uVar10 = FUN_01322618(lVar8,uVar12,
                                  *(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021b1b90 with catch @ 021b1bb0
                       catch(type#2 @ 00000000) { ... } // from try @ 021b1ba8 with catch @ 021b1bb0
                        */
            if ((uVar10 & 1) == 0) {
                    /* try { // try from 021b1bb4 to 022b1bff has its CatchHandler @ 021b1bb4
                       catch() { ... } // from try @ 021b1bb4 with catch @ 021b1bb4
                       catch() { ... } // from try @ 021b1c44 with catch @ 021b1bb4
                       catch() { ... } // from try @ 021b1c70 with catch @ 021b1bb4
                       catch() { ... } // from try @ 021b1c94 with catch @ 021b1bb4
                       catch() { ... } // from try @ 021b1ce0 with catch @ 021b1bb4 */
              if (*(long *)(in_stack_00000018 + 0x20) == 0) break;
              uVar10 = FUN_021b15c8(uVar10,*(undefined8 *)
                                            (*(long *)(in_stack_00000018 + 0x20) + 0x30),iVar18);
              if ((uVar10 & 1) != 0) {
                auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                    (unaff_x29,uVar12,0);
                _in_stack_00000040 = auVar20;
                auVar20 = FUN_021ec578(&stack0x00000040,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<XRControllerState>_get_Item__
                                       ,0);
                    /* try { // try from 021b1c00 to 022b1c0b has its CatchHandler @ 021b1c78 */
                _in_stack_00000040 = auVar20;
                FUN_021ec6e0(&stack0x00000040,0,0);
                FUN_00ac1158(lVar8,uVar12,*(undefined8 *)puVar6);
              }
            }
          }
                    /* try { // try from 021b1c24 to 022b1c27 has its CatchHandler @ 021b1c70 */
                    /* try { // try from 021b1c28 to 022b1c43 has its CatchHandler @ 021b1c74 */
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
                    /* try { // try from 021b1c44 to 022b1c6b has its CatchHandler @ 021b1bb4 */
          uVar14 = 4;
          switch(uVar13) {
          case 0:
            uVar14 = uVar7;
            break;
          case 1:
            uVar14 = 1;
            break;
          case 2:
          case 3:
            break;
          case 4:
                    /* try { // try from 021b1c6c to 022b1c6f has its CatchHandler @ 021b1c78 */
            uVar14 = 8;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b1c24 with catch @ 021b1c70
                       try { // try from 021b1c70 to 022b1c8f has its CatchHandler @ 021b1bb4 */
            break;
          case 5:
            uVar14 = 0xc;
                    /* try { // try from 021b1c90 to 022b1c93 has its CatchHandler @ 021b1cc8 */
            break;
          case 6:
                    /* try { // try from 021b1c94 to 022b1ccf has its CatchHandler @ 021b1bb4 */
            uVar14 = 0x10;
            break;
          case 7:
            uVar14 = 0x68;
            break;
          case 8:
            uVar14 = 0x20;
            break;
          case 9:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b1c28 with catch @ 021b1c74
                        */
            uVar14 = 0x4c;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b1c00 with catch @ 021b1c78
                       catch(type#1 @ 03274860) { ... } // from try @ 021b1c6c with catch @ 021b1c78
                        */
            break;
          default:
            uVar14 = 0;
          }
          uVar10 = thunk_FUN_015fe514(*(undefined8 *)(in_stack_00000018 + 0x18),
                                      *(undefined8 *)StringLiteral_5991,0);
                    /* catch() { ... } // from try @ 021b1c90 with catch @ 021b1cc8 */
          if ((uVar10 & 1) == 0) {
                    /* try { // try from 021b1ce0 to 022b1ceb has its CatchHandler @ 021b1bb4 */
            if ((3 < uVar14) && ((uVar19 & 3) != 0)) {
              uVar19 = (uVar19 - (uVar19 & 3)) + 4;
            }
          }
          else {
                    /* try { // try from 021b1cd0 to 022b1cdf has its CatchHandler @ 021b1cf4 */
            if (uVar14 < 5) {
              uVar14 = 4;
            }
          }
                    /* try { // try from 021b1cec to 022b1cf3 has its CatchHandler @ 021b1cf4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021b1cd0 with catch @ 021b1cf4
                       catch(type#2 @ 00000000) { ... } // from try @ 021b1cec with catch @ 021b1cf4
                        */
          switch(uVar13) {
          case 1:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__
                                   ,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
            lVar15 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar4;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 4);
            break;
          case 2:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                                   ,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
            lVar15 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar4;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xc);
            break;
          case 3:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)System_ArithmeticException_TypeInfo,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
            lVar15 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar4;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x2c);
            break;
          case 4:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,*(undefined8 *)StringLiteral_14119,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
                    /* try { // try from 021b1f88 to 022b20c3 has its CatchHandler @ 021b1f88
                       catch() { ... } // from try @ 021b1f88 with catch @ 021b1f88
                       catch() { ... } // from try @ 021b20ec with catch @ 021b1f88
                       catch() { ... } // from try @ 021b21c8 with catch @ 021b1f88
                       catch() { ... } // from try @ 021b21f8 with catch @ 021b1f88 */
            lVar17 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar17 = *(long *)puVar4;
            }
            auVar20 = FUN_021ec664(&stack0x00000040,*(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0x34)
                                   ,0);
            _in_stack_00000040 = auVar20;
            FUN_021ecb3c(&stack0x00000040,lVar9,0);
            uVar12 = FUN_015f5b28(lVar15,*(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputRemoting_DeserializeData<InputRemoting_NewLayoutMsg_Data>__
                                  ,0);
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,uVar12,0);
            puVar3 = System_ArithmeticException_TypeInfo;
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)System_ArithmeticException_TypeInfo,0);
            _in_stack_00000040 = auVar20;
            FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
            uVar12 = FUN_015f5b28(lVar15,*(undefined8 *)
                                          Meta_WitAi_Configuration_WitRequestOptions_TypeInfo,0);
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,uVar12,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,*(undefined8 *)puVar3,0);
            _in_stack_00000040 = auVar20;
            FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
            goto switchD_021b1d10_caseD_7;
          case 5:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__
                                   ,0);
            _in_stack_00000040 = auVar20;
                    /* try { // try from 021b20c4 to 022b20c7 has its CatchHandler @ 021b21a8 */
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
                    /* try { // try from 021b20d0 to 022b20eb has its CatchHandler @ 021b21ac */
            lVar15 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar4;
            }
                    /* try { // try from 021b20ec to 022b21c3 has its CatchHandler @ 021b1f88 */
            uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x38);
            break;
          case 6:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,
                                   *(undefined8 *)
                                    Method_Newtonsoft_Json_JsonReader_ReadInt32String__,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
            lVar15 = *(long *)puVar4;
            _in_stack_00000040 = auVar20;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar4;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x3c);
            break;
          default:
            goto switchD_021b1d10_caseD_7;
          case 8:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            puVar16 = (undefined8 *)
                      Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
            goto LAB_021b1e8c;
          case 9:
            auVar20 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                (unaff_x29,lVar15,0);
            puVar16 = (undefined8 *)StringLiteral_5073;
LAB_021b1e8c:
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec578(&stack0x00000040,*puVar16,0);
            _in_stack_00000040 = auVar20;
            auVar20 = FUN_021ec6e0(&stack0x00000040,uVar19,0);
            goto LAB_021b20fc;
          }
          auVar20 = FUN_021ec664(&stack0x00000040,uVar13,0);
LAB_021b20fc:
          _in_stack_00000040 = auVar20;
          FUN_021ecb3c(&stack0x00000040,lVar9,0);
switchD_021b1d10_caseD_7:
          uVar19 = uVar19 + uVar14;
          iVar18 = iVar18 + 1;
          lVar15 = *(long *)(in_stack_00000018 + 0x20);
        } while (lVar15 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


