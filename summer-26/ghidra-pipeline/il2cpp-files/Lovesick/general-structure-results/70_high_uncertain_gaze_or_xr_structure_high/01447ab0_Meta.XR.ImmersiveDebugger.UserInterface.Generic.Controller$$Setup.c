/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$Setup
ENTRY_POINT: 01447ab0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Setup
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long *unaff_x19;
  long unaff_x20;
  int iVar17;
  long unaff_x21;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_12992);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__);
  thunk_FUN_00d48444(PTR_DAT_033ec228);
  thunk_FUN_00d48444(PTR_DAT_033f3358);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_MeshUtility_GeneratePerTriangleMesh__);
  *(undefined1 *)(unaff_x20 + 0xa48) = 1;
  puVar7 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  puVar6 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
  puVar5 = Method_UnityEngine_ProBuilder_MeshUtility_GeneratePerTriangleMesh__;
  puVar4 = Method_System_MarshalByRefObject_set_ObjectIdentity__;
  puVar3 = PTR_DAT_033f3358;
  puVar2 = PTR_DAT_033f1658;
  puVar1 = PTR_DAT_033ead30;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (**(char **)(*unaff_x19 + 0xb8) != '\0') {
    if (unaff_x21 == 0) {
LAB_0144823c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar14 = 0;
      do {
        FUN_0132138c(unaff_x21,iVar14,&stack0x000000a8,*(undefined8 *)PTR_DAT_033ee2d8);
        lVar8 = in_stack_000000a8;
        if (in_stack_000000a8 == 0) goto LAB_0144823c;
        if (*(char *)(in_stack_000000a8 + 0x20) != '\0') {
          lVar16 = *(long *)(in_stack_000000a8 + 0x18);
          if (lVar16 == 0) goto LAB_0144823c;
          iVar17 = 0;
          while( true ) {
            lVar16 = *(long *)(lVar16 + 0x10);
            if (lVar16 == 0) goto LAB_0144823c;
            if (*(int *)(lVar16 + 0x18) <= iVar17) break;
            FUN_0132138c(lVar16,iVar17,&stack0x000000a8,*(undefined8 *)puVar7);
            if (in_stack_000000a8 == 0) goto LAB_0144823c;
            in_stack_00000098 = *(undefined8 *)(in_stack_000000a8 + 0x30);
            in_stack_00000090 = *(undefined8 *)(in_stack_000000a8 + 0x28);
            in_stack_00000088 = *(undefined8 *)(in_stack_000000a8 + 0x20);
            in_stack_00000080 = *(undefined8 *)(in_stack_000000a8 + 0x18);
            in_stack_00000078 = *(undefined8 *)(in_stack_000000a8 + 0x70);
            in_stack_00000070 = *(undefined8 *)(in_stack_000000a8 + 0x68);
            in_stack_00000068 = *(undefined8 *)(in_stack_000000a8 + 0x60);
            uVar23 = *(undefined8 *)(in_stack_000000a8 + 0x58);
            uVar20 = *(undefined4 *)(lVar8 + 0x24);
            in_stack_00000060 = uVar23;
            uVar21 = FUN_014315a4(&stack0x00000080,0);
            uVar13 = uVar23;
            uVar12 = param_3;
            uVar18 = param_4;
            uVar22 = FUN_014315a4(&stack0x00000060,0);
            lVar16 = *(long *)(lVar8 + 0x10);
            if (lVar16 == 0) goto LAB_0144823c;
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01448240;
            lVar16 = *(long *)(lVar16 + 0x20);
            if (lVar16 == 0) goto LAB_0144823c;
            in_stack_00000048 = *(undefined8 *)(lVar16 + 0x28);
            in_stack_00000040 = *(undefined8 *)(lVar16 + 0x20);
            in_stack_00000058 = *(undefined8 *)(lVar16 + 0x38);
            in_stack_00000050 = *(undefined8 *)(lVar16 + 0x30);
            FUN_014315a4(&stack0x00000040,0);
            uVar9 = FUN_013e934c(uVar21,uVar23,param_3,param_4,uVar22,uVar13,uVar12,uVar18,uVar20,3,
                                 0);
            if ((uVar9 & 1) == 0) {
              plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xb);
              if (plVar10 == (long *)0x0) goto LAB_0144823c;
              lVar16 = *(long *)puVar4;
              if ((lVar16 != 0) &&
                 (lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0)
                 ) {
LAB_01448244:
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              if ((int)plVar10[3] == 0) goto LAB_01448240;
              plVar10[4] = *(long *)puVar4;
              if (((*(long *)(lVar8 + 0x18) == 0) ||
                  (lVar16 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar16 == 0)) ||
                 (FUN_0132138c(lVar16,iVar17,&stack0x000000a8,*(undefined8 *)puVar7),
                 in_stack_000000a8 == 0)) goto LAB_0144823c;
              lVar16 = *(long *)(in_stack_000000a8 + 0x78);
              if ((lVar16 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) goto LAB_01448244;
              uVar15 = *(uint *)(plVar10 + 3);
              if (uVar15 < 2) {
LAB_01448240:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar10[5] = lVar16;
              if (*(long *)Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__ != 0
                 ) {
                lVar16 = thunk_FUN_00d6225c(*(long *)
                                             Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__
                                            ,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar16 == 0) goto LAB_01448244;
                uVar15 = *(uint *)(plVar10 + 3);
              }
              if (uVar15 < 3) goto LAB_01448240;
              plVar10[6] = *(long *)
                            Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__;
              in_stack_00000048 = in_stack_00000088;
              in_stack_00000040 = in_stack_00000080;
              in_stack_00000058 = in_stack_00000098;
              in_stack_00000050 = in_stack_00000090;
              uVar13 = in_stack_00000080;
              lVar16 = FUN_0143182c(&stack0x00000040,0);
              uVar20 = (undefined4)uVar13;
              if ((lVar16 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) goto LAB_01448244;
              uVar15 = *(uint *)(plVar10 + 3);
              if (uVar15 < 4) goto LAB_01448240;
              plVar10[7] = lVar16;
              if (*(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)
                                             UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo
                                            ,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar16 == 0) goto LAB_01448244;
                uVar15 = *(uint *)(plVar10 + 3);
              }
              if (uVar15 < 5) goto LAB_01448240;
              plVar10[8] = *(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo;
              uVar19 = FUN_014315a4(&stack0x00000060,0);
              in_stack_00000030 = CONCAT44(uVar20,uVar19);
              in_stack_00000038 = CONCAT44((int)param_4,(int)param_3);
              lVar16 = FUN_02688ad8(&stack0x00000030,*(undefined8 *)StringLiteral_12992,0);
              if ((lVar16 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) goto LAB_01448244;
              uVar15 = *(uint *)(plVar10 + 3);
              if (uVar15 < 6) goto LAB_01448240;
              plVar10[9] = lVar16;
              lVar16 = *(long *)puVar3;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar16 == 0) goto LAB_01448244;
                uVar15 = *(uint *)(plVar10 + 3);
              }
              if (uVar15 < 7) goto LAB_01448240;
              plVar10[10] = *(long *)puVar3;
              if (((*(long *)(lVar8 + 0x18) == 0) ||
                  (lVar16 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar16 == 0)) ||
                 (FUN_0132138c(lVar16,iVar17,&stack0x000000a8,*(undefined8 *)puVar7),
                 in_stack_000000a8 == 0)) goto LAB_0144823c;
              in_stack_00000058 = *(undefined8 *)(in_stack_000000a8 + 0x50);
              in_stack_00000050 = *(undefined8 *)(in_stack_000000a8 + 0x48);
              in_stack_00000048 = *(undefined8 *)(in_stack_000000a8 + 0x40);
              uVar13 = *(undefined8 *)(in_stack_000000a8 + 0x38);
              in_stack_00000040 = uVar13;
              uVar20 = FUN_014315a4(&stack0x00000040,0);
              in_stack_00000030 = CONCAT44((int)uVar13,uVar20);
              in_stack_00000038 = CONCAT44((int)param_4,(int)param_3);
              lVar16 = FUN_02688ad8(&stack0x00000030,*(undefined8 *)puVar5,0);
              if ((lVar16 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) goto LAB_01448244;
              uVar15 = *(uint *)(plVar10 + 3);
              if (uVar15 < 8) goto LAB_01448240;
              plVar10[0xb] = lVar16;
              lVar16 = *(long *)puVar2;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar16 == 0) goto LAB_01448244;
                uVar15 = *(uint *)(plVar10 + 3);
              }
              if (uVar15 < 9) goto LAB_01448240;
              plVar10[0xc] = *(long *)puVar2;
              lVar16 = *(long *)(lVar8 + 0x10);
              if (lVar16 == 0) goto LAB_0144823c;
              if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01448240;
              lVar16 = *(long *)(lVar16 + 0x20);
              if (lVar16 == 0) goto LAB_0144823c;
              in_stack_00000048 = *(undefined8 *)(lVar16 + 0x28);
              uVar13 = *(undefined8 *)(lVar16 + 0x20);
              in_stack_00000058 = *(undefined8 *)(lVar16 + 0x38);
              in_stack_00000050 = *(undefined8 *)(lVar16 + 0x30);
              in_stack_00000040 = uVar13;
              uVar20 = FUN_014315a4(&stack0x00000040,0);
              in_stack_00000030 = CONCAT44((int)uVar13,uVar20);
              in_stack_00000038 = CONCAT44((int)param_4,(int)param_3);
              lVar16 = FUN_02688ad8(&stack0x00000030,*(undefined8 *)puVar5,0);
              if ((lVar16 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)
                 ) goto LAB_01448244;
              uVar15 = *(uint *)(plVar10 + 3);
              if (uVar15 < 10) goto LAB_01448240;
              plVar10[0xd] = lVar16;
              lVar16 = *(long *)puVar1;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar16 == 0) goto LAB_01448244;
                uVar15 = *(uint *)(plVar10 + 3);
              }
              if (uVar15 < 0xb) goto LAB_01448240;
              plVar10[0xe] = *(long *)puVar1;
              uVar12 = FUN_01600844(plVar10,0);
              lVar11 = *(long *)puVar6;
              lVar16 = *(long *)(lVar11 + 0x38);
              if (lVar16 == 0) {
                FUN_00d59478(lVar11);
                lVar16 = *(long *)(lVar11 + 0x38);
              }
              lVar16 = *(long *)(lVar16 + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar16 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              uVar18 = **(undefined8 **)(lVar16 + 0xb8);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661304(uVar12,uVar18,0);
              if (((*(long *)(lVar8 + 0x18) == 0) ||
                  (lVar16 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar16 == 0)) ||
                 (FUN_0132138c(lVar16,iVar17,&stack0x000000a8,*(undefined8 *)puVar7),
                 in_stack_000000a8 == 0)) goto LAB_0144823c;
              uVar12 = FUN_01600424(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Type,_bool>_TryGetValue__
                                    ,*(undefined8 *)(in_stack_000000a8 + 0x78),
                                    *(undefined8 *)PTR_DAT_033ec228,0);
              lVar11 = *(long *)puVar6;
              lVar16 = *(long *)(lVar11 + 0x38);
              if (lVar16 == 0) {
                FUN_00d59478(lVar11);
                lVar16 = *(long *)(lVar11 + 0x38);
              }
              lVar16 = *(long *)(lVar16 + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar16 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              uVar12 = FUN_01600be4(uVar12,**(undefined8 **)(lVar16 + 0xb8),0);
              lVar11 = *(long *)puVar6;
              lVar16 = *(long *)(lVar11 + 0x38);
              if (lVar16 == 0) {
                FUN_00d59478(lVar11);
                lVar16 = *(long *)(lVar11 + 0x38);
              }
              lVar16 = *(long *)(lVar16 + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar16 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              FUN_02661304(uVar12,**(undefined8 **)(lVar16 + 0xb8),0);
              uVar20 = *(undefined4 *)(lVar8 + 0x24);
              uVar22 = FUN_014315a4(&stack0x00000080,0);
              uVar12 = uVar13;
              uVar18 = param_3;
              uVar21 = param_4;
              uVar23 = FUN_014315a4(&stack0x00000060,0);
              lVar16 = *(long *)(lVar8 + 0x10);
              if (lVar16 == 0) goto LAB_0144823c;
              if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01448240;
              lVar16 = *(long *)(lVar16 + 0x20);
              if (lVar16 == 0) goto LAB_0144823c;
              in_stack_00000048 = *(undefined8 *)(lVar16 + 0x28);
              in_stack_00000040 = *(undefined8 *)(lVar16 + 0x20);
              in_stack_00000058 = *(undefined8 *)(lVar16 + 0x38);
              in_stack_00000050 = *(undefined8 *)(lVar16 + 0x30);
              FUN_014315a4(&stack0x00000040,0);
              FUN_013e934c(uVar22,uVar13,param_3,param_4,uVar23,uVar12,uVar18,uVar21,uVar20,5,0);
            }
            lVar16 = *(long *)(lVar8 + 0x18);
            iVar17 = iVar17 + 1;
            if (lVar16 == 0) goto LAB_0144823c;
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(unaff_x21 + 0x18));
    }
  }
  return;
}


