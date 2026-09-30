/*
FUNCTION_NAME: Unity.Mathematics.noise$$mod289
ENTRY_POINT: 021b1868
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Mathematics_noise__mod289(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  long lStack0000000000000010;
  long in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  long in_stack_00000028;
  undefined4 uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  thunk_FUN_00d48444(StringLiteral_5991);
  thunk_FUN_00d48444(StringLiteral_14119);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__);
  *(undefined1 *)(unaff_x21 + 0x5b9) = 1;
                    /* try { // try from 021b18ac to 022b18b7 has its CatchHandler @ 021b1924 */
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000040 = 0;
  lVar8 = thunk_FUN_00d62348(*unaff_x20);
  puVar2 = StringLiteral_9027;
  puVar4 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
  if (lVar8 != 0) {
                    /* try { // try from 021b18d0 to 022b18d3 has its CatchHandler @ 021b191c */
                    /* try { // try from 021b18d4 to 022b18ef has its CatchHandler @ 021b1920 */
    FUN_021ec528(lVar8,0);
                    /* try { // try from 021b18f0 to 022b1917 has its CatchHandler @ 021b1860 */
    uStack0000000000000020 = 0;
    FUN_021f9740(&stack0x00000020,0x58,0x52,0x53,0x30,0);
    *(undefined4 *)(lVar8 + 0x28) = uStack0000000000000020;
                    /* try { // try from 021b1918 to 022b191b has its CatchHandler @ 021b1924 */
    FUN_021ebfe8(lVar8,*(undefined8 *)(in_stack_00000018 + 0x10),0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b18d0 with catch @ 021b191c
                       try { // try from 021b191c to 022b193b has its CatchHandler @ 021b1860 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b18d4 with catch @ 021b1920
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b18ac with catch @ 021b1924
                       catch(type#1 @ 03274860) { ... } // from try @ 021b1918 with catch @ 021b1924
                        */
    in_stack_00000038._4_2_ = 0;
    in_stack_00000068._4_1_ = 1;
    FUN_01347274((long)&stack0x00000038 + 4,(long)&stack0x00000068 + 4,*(undefined8 *)puVar2);
                    /* try { // try from 021b193c to 022b193f has its CatchHandler @ 021b1974 */
                    /* try { // try from 021b1940 to 022b197b has its CatchHandler @ 021b1860 */
    *(undefined2 *)(lVar8 + 0x38) = in_stack_00000038._4_2_;
    uVar9 = FUN_015ff8a0(*(undefined8 *)(in_stack_00000018 + 0x10),0);
    lStack0000000000000010 = 0;
    if ((uVar9 & 1) == 0) {
      uVar18 = *(undefined8 *)(in_stack_00000018 + 0x10);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* catch() { ... } // from try @ 021b193c with catch @ 021b1974 */
                    /* try { // try from 021b197c to 022b198b has its CatchHandler @ 021b19a0 */
      lStack0000000000000010 = FUN_0213ef08(uVar18,0);
    }
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar2 = System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo;
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo
                  );
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar11 != 0) {
        FUN_01320e50(lVar11,*(undefined8 *)puVar2);
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
        puVar5 = Method_System_Span<byte>_ToArray__;
        puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        puVar4 = 
        Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__;
        lVar15 = *(long *)(in_stack_00000018 + 0x20);
        if (lVar15 != 0) {
          uVar20 = 0;
          iVar19 = 0;
          do {
            lVar15 = *(long *)(lVar15 + 0x30);
            if (lVar15 == 0) break;
            if (*(int *)(lVar15 + 0x18) <= iVar19) {
              FUN_021ec2ec(lVar8,0);
              return;
            }
            FUN_0132138c(lVar15,iVar19,&stack0x00000020,
                         *(undefined8 *)Method_System_Threading_SpinLock_ExitSlowPath__);
            uVar7 = uStack0000000000000034;
            uVar13 = uStack0000000000000030;
            lVar15 = in_stack_00000028;
            uVar18 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
            lVar17 = *(long *)
                      Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
            ;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
            if ((uVar9 & 1) == 0) {
              *(undefined4 *)(lVar11 + 0x18) = 0;
            }
            else {
              iVar1 = *(int *)(lVar11 + 0x18);
              *(undefined4 *)(lVar11 + 0x18) = 0;
              if (0 < iVar1) {
                FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
              }
            }
            if (lVar15 != 0) {
              FUN_01323390(lVar15,&stack0x00000020,
                           *(undefined8 *)
                            Method_UnityEngine_ProBuilder_ArrayUtility_Fill<List<Vertex>>__);
              in_stack_00000050 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
              in_stack_00000060 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
              in_stack_00000058 = in_stack_00000028;
              while( true ) {
                uVar9 = FUN_012b894c(&stack0x00000050,*(undefined8 *)puVar5);
                if ((uVar9 & 1) == 0) break;
                uVar12 = FUN_00c625c8(&stack0x00000050,*(undefined8 *)puVar4);
                uVar9 = FUN_015ff8a0(uVar12,0);
                if ((uVar9 & 1) == 0) {
                  FUN_00ac1158(lVar11,uVar12,*(undefined8 *)puVar6);
                }
              }
              FUN_012b8948(&stack0x00000050,*(undefined8 *)StringLiteral_11241);
            }
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar15 = FUN_021b0e2c(uVar18,1);
            if (lStack0000000000000010 != 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar15 = FUN_021b13f0(lStack0000000000000010,lVar15);
            }
            if (lVar15 == 0) break;
            lVar15 = FUN_01604018(lVar15,0);
            if (lVar15 == 0) break;
            uVar9 = FUN_01604784(lVar15,0x2f,0);
            if ((uVar9 & 1) != 0) {
              uVar18 = FUN_021b1590(uVar9,lVar15);
              uVar9 = FUN_01322618(lVar10,uVar18,
                                   *(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo)
              ;
              if ((uVar9 & 1) == 0) {
                if (*(long *)(in_stack_00000018 + 0x20) == 0) break;
                uVar9 = FUN_021b15c8(uVar9,*(undefined8 *)
                                            (*(long *)(in_stack_00000018 + 0x20) + 0x30),iVar19);
                if ((uVar9 & 1) != 0) {
                  auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                      (lVar8,uVar18,0);
                  _in_stack_00000040 = auVar21;
                  auVar21 = FUN_021ec578(&stack0x00000040,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<XRControllerState>_get_Item__
                                         ,0);
                  _in_stack_00000040 = auVar21;
                  FUN_021ec6e0(&stack0x00000040,0,0);
                  FUN_00ac1158(lVar10,uVar18,*(undefined8 *)puVar6);
                }
              }
            }
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_get_Current__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
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
              uVar14 = 8;
              break;
            case 5:
              uVar14 = 0xc;
              break;
            case 6:
              uVar14 = 0x10;
              break;
            case 7:
              uVar14 = 0x68;
              break;
            case 8:
              uVar14 = 0x20;
              break;
            case 9:
              uVar14 = 0x4c;
              break;
            default:
              uVar14 = 0;
            }
            uVar9 = thunk_FUN_015fe514(*(undefined8 *)(in_stack_00000018 + 0x18),
                                       *(undefined8 *)StringLiteral_5991,0);
            if ((uVar9 & 1) == 0) {
              if ((3 < uVar14) && ((uVar20 & 3) != 0)) {
                uVar20 = (uVar20 - (uVar20 & 3)) + 4;
              }
            }
            else if (uVar14 < 5) {
              uVar14 = 4;
            }
            switch(uVar13) {
            case 1:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__
                                     ,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar15 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 4);
              break;
            case 2:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                                     ,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar15 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xc);
              break;
            case 3:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)System_ArithmeticException_TypeInfo,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar15 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x2c);
              break;
            case 4:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,*(undefined8 *)StringLiteral_14119,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar17 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar17 = *(long *)puVar2;
              }
              auVar21 = FUN_021ec664(&stack0x00000040,
                                     *(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0x34),0);
              _in_stack_00000040 = auVar21;
              FUN_021ecb3c(&stack0x00000040,lVar11,0);
              uVar18 = FUN_015f5b28(lVar15,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_InputRemoting_DeserializeData<InputRemoting_NewLayoutMsg_Data>__
                                    ,0);
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,uVar18,0);
              puVar3 = System_ArithmeticException_TypeInfo;
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)System_ArithmeticException_TypeInfo,0);
              _in_stack_00000040 = auVar21;
              FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
              uVar18 = FUN_015f5b28(lVar15,*(undefined8 *)
                                            Meta_WitAi_Configuration_WitRequestOptions_TypeInfo,0);
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,uVar18,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,*(undefined8 *)puVar3,0);
              _in_stack_00000040 = auVar21;
              FUN_021ec8cc(0xbf800000,0x3f800000,&stack0x00000040,0);
              goto switchD_021b1d10_caseD_7;
            case 5:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Guid,_Exception>_Clear__
                                     ,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar15 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x38);
              break;
            case 6:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,
                                     *(undefined8 *)
                                      Method_Newtonsoft_Json_JsonReader_ReadInt32String__,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              lVar15 = *(long *)puVar2;
              _in_stack_00000040 = auVar21;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x3c);
              break;
            default:
              goto switchD_021b1d10_caseD_7;
            case 8:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              puVar16 = (undefined8 *)
                        Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
              goto LAB_021b1e8c;
            case 9:
              auVar21 = UnityEngine_ProBuilder_Poly2Tri_DTSweep__FillRightConcaveEdgeEvent
                                  (lVar8,lVar15,0);
              puVar16 = (undefined8 *)StringLiteral_5073;
LAB_021b1e8c:
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec578(&stack0x00000040,*puVar16,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_021ec6e0(&stack0x00000040,uVar20,0);
              goto LAB_021b20fc;
            }
            auVar21 = FUN_021ec664(&stack0x00000040,uVar13,0);
LAB_021b20fc:
            _in_stack_00000040 = auVar21;
            FUN_021ecb3c(&stack0x00000040,lVar11,0);
switchD_021b1d10_caseD_7:
            uVar20 = uVar20 + uVar14;
            iVar19 = iVar19 + 1;
            lVar15 = *(long *)(in_stack_00000018 + 0x20);
          } while (lVar15 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


