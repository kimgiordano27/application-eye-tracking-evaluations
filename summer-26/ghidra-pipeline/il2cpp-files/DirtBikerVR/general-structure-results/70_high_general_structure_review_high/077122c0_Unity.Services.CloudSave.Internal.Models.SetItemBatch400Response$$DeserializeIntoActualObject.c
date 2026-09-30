/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.SetItemBatch400Response$$DeserializeIntoActualObject
ENTRY_POINT: 077122c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_CloudSave_Internal_Models_SetItemBatch400Response__DeserializeIntoActualObject
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  uint6 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ushort *puVar19;
  uint uVar20;
  long lVar21;
  ushort uVar22;
  ulong uVar23;
  uint uVar24;
  ulong unaff_x21;
  long *unaff_x23;
  ulong uVar25;
  long unaff_x25;
  ulong uVar26;
  long unaff_x28;
  ulong uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  ulong in_stack_00000010;
  bool bVar34;
  long *in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  iVar7 = FUN_0776fddc();
  if (**(long **)(*unaff_x23 + 0xb8) != 0) {
    iVar8 = FUN_04e305a0(**(long **)(*unaff_x23 + 0xb8),
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Models_BatchConflictErrorResponse_var);
    if (iVar8 < iVar7) {
      if (**(long **)(*unaff_x23 + 0xb8) == 0) goto LAB_07712d48;
      FUN_04e305b8(**(long **)(*unaff_x23 + 0xb8),iVar7,*(undefined8 *)System_IO_BinaryWriter_var);
    }
    lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    if (lVar12 != 0) {
      iVar7 = (int)unaff_x21;
      if (*(int *)(lVar12 + 0x18) < iVar7) {
        FUN_04eedbd4(lVar12,unaff_x21 & 0xffffffff,
                     *(undefined8 *)UnityEngine_UIElements_BindingActivationContext_var);
        lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_07712d48;
        iVar8 = (iVar7 - *(int *)(lVar12 + 0x18)) + 1;
        if (0 < iVar8) {
          do {
            lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_07712d48;
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar18 = *(long *)UnityEngine_InputSystem_Controls_AxisControl_var;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_07712d48;
            uVar9 = *(uint *)(lVar12 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + (long)(int)uVar9 * 0xe;
              *(uint *)(lVar12 + 0x18) = uVar9 + 1;
              *(undefined8 *)(lVar15 + 0x20) = 0;
              *(undefined2 *)(lVar15 + 0x2c) = 0;
              *(undefined4 *)(lVar15 + 0x28) = 0;
            }
            else {
              FUN_04eee0d0(lVar12,0,0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      plVar16 = *(long **)(*unaff_x23 + 0xb8);
      lVar12 = *plVar16;
      if (lVar12 != 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        puVar6 = UnityEngine_UIElements_BindingContext_var;
        if (iVar7 < 1) {
          uVar22 = 0;
        }
        else {
          uVar26 = 0;
          uVar22 = 0;
          do {
            if (uVar26 == *(uint *)(unaff_x25 + 0x10)) {
              lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
              if (lVar15 == 0) goto LAB_07712d48;
              if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_07712d9c;
LAB_0771271c:
              fVar32 = 3.4028235e+38;
            }
            else {
              uVar13 = FUN_045fc1e8(in_stack_00000040,unaff_x21,uVar26 & 0xffffffff,
                                    *(undefined8 *)UnityEngine_UIElements_UIR_BitmapAllocator32_var)
              ;
              lVar12 = FUN_07cdebec(uVar13,0);
              in_stack_00000068._4_4_ = FUN_07cdec78(uVar13,0);
              if (lVar12 == 0) goto LAB_07712d48;
              iVar7 = FUN_07c6d37c(lVar12,0);
              uVar11 = FUN_07c6d4f4(lVar12,0);
              if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar27 = FUN_077548e4(uVar11);
              iVar8 = in_stack_00000068._4_4_;
              if ((uVar27 & 1) == 0) {
                lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
                if (lVar15 != 0) {
                  if (uVar26 < *(uint *)(lVar15 + 0x18)) goto LAB_0771271c;
                  goto LAB_07712d9c;
                }
                goto LAB_07712d48;
              }
              if ((unaff_x28 == 0) || (*(long *)(unaff_x28 + 0x50) == 0)) goto LAB_07712d48;
              uVar9 = FUN_04d8be94(*(long *)(unaff_x28 + 0x50),uVar26 & 0xffffffff,
                                   *(undefined8 *)PTR_DAT_08487a70);
              if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)System_ComponentModel_BooleanConverter_var);
              }
              iVar10 = FUN_07752358((long)&stack0x00000068 + 4,0);
              if (0 < iVar10) {
                uVar27 = 0;
                do {
                  lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  if (lVar15 == 0) goto LAB_07712d48;
                  uVar28 = *(uint *)(lVar15 + 0x18);
                  if ((int)uVar28 <= (int)(uint)uVar22) {
                    lVar18 = *(long *)(lVar15 + 0x10);
                    lVar21 = *(long *)UnityEngine_InputSystem_Controls_AxisControl_var;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar18 == 0) goto LAB_07712d48;
                    if (uVar28 < *(uint *)(lVar18 + 0x18)) {
                      lVar18 = lVar18 + (long)(int)uVar28 * 0xe;
                      *(uint *)(lVar15 + 0x18) = uVar28 + 1;
                      *(undefined8 *)(lVar18 + 0x20) = 0;
                      *(undefined2 *)(lVar18 + 0x2c) = 0;
                      *(undefined4 *)(lVar18 + 0x28) = 0;
                    }
                    else {
                      FUN_04eee0d0(lVar15,0,0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  if (lVar15 == 0) goto LAB_07712d48;
                  auVar33 = FUN_04eedd84(lVar15,uVar22,*(undefined8 *)System_Numerics_BigInteger_var
                                        );
                  lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  if (lVar15 == 0) goto LAB_07712d48;
                  FUN_04eedde8(lVar15,uVar22,
                               auVar33._0_8_ & 0xffff000000000000 | (ulong)(uVar9 & 0xffff) << 0x20
                               | (uVar27 & 0xffff) << 0x10 | uVar26 & 0xffff,
                               auVar33._8_8_ & 0xffffffff |
                               (ulong)(auVar33._12_4_ & 0xfffc |
                                      (uint)(iVar7 == 2) | (uint)(iVar8 == 2) << 1) << 0x20,
                               *(undefined8 *)puVar6);
                  uVar28 = (int)uVar27 + 1;
                  uVar27 = (ulong)uVar28;
                  uVar22 = uVar22 + 1;
                } while ((int)(uVar28 & 0xffff) < iVar10);
              }
              if (in_stack_00000030 == 0) goto LAB_07712d48;
              fVar32 = *(float *)(in_stack_00000030 + 0x1e4);
              fVar30 = *(float *)(in_stack_00000030 + 0x1e8);
              fVar31 = *(float *)(in_stack_00000030 + 0x1ec);
              lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
              lVar12 = FUN_07c98f88(lVar12,0);
              if ((lVar12 == 0) || (fVar29 = (float)FUN_07cac280(lVar12,0), lVar15 == 0))
              goto LAB_07712d48;
              if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_07712d9c;
              fVar32 = fVar32 - fVar29;
              fVar30 = fVar30 - param_2;
              fVar31 = fVar31 - param_3;
              param_2 = fVar30 * fVar30;
              param_3 = fVar31 * fVar31;
              fVar32 = param_3 + fVar32 * fVar32 + param_2;
            }
            lVar12 = uVar26 * 4;
            uVar26 = uVar26 + 1;
            *(float *)(lVar15 + lVar12 + 0x20) = fVar32;
          } while (uVar26 != (unaff_x21 & 0xffffffff));
          plVar16 = *(long **)(*unaff_x23 + 0xb8);
        }
        if ((plVar16[4] == 0) || (*(int *)(plVar16[4] + 0x18) < (int)(uint)uVar22)) {
          uVar13 = FUN_03a8a804(*(undefined8 *)UnityEngine_BoneWeight_var,uVar22);
          puVar17 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
          *puVar17 = uVar13;
          thunk_FUN_03afed3c(puVar17,uVar13);
        }
                    /* try { // try from 07712794 to 07812b33 has its CatchHandler @ 07712794
                       catch() { ... } // from try @ 07712794 with catch @ 07712794
                       catch() { ... } // from try @ 07712ff8 with catch @ 07712794
                       catch() { ... } // from try @ 077134a4 with catch @ 07712794
                       catch() { ... } // from try @ 07713b48 with catch @ 07712794
                       catch() { ... } // from try @ 07713bf0 with catch @ 07712794
                       catch() { ... } // from try @ 07713ccc with catch @ 07712794
                       catch() { ... } // from try @ 07713cf0 with catch @ 07712794
                       catch() { ... } // from try @ 07713de4 with catch @ 07712794
                       catch() { ... } // from try @ 07713e04 with catch @ 07712794
                       catch() { ... } // from try @ 07713e28 with catch @ 07712794
                       catch() { ... } // from try @ 07713e4c with catch @ 07712794 */
        uVar9 = (uint)uVar22;
        if (uVar9 != 0) {
          uVar26 = 0;
          lVar12 = 0x20;
          do {
            lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            if (lVar15 == 0) goto LAB_07712d48;
            lVar18 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
            auVar33 = FUN_04eedd84(lVar15,uVar26 & 0xffffffff,
                                   *(undefined8 *)System_Numerics_BigInteger_var);
            if (lVar18 == 0) goto LAB_07712d48;
            if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_07712d9c;
            uVar26 = uVar26 + 1;
            puVar17 = (undefined8 *)(lVar18 + lVar12);
            lVar12 = lVar12 + 0xe;
            *puVar17 = auVar33._0_8_;
            *(int *)(puVar17 + 1) = auVar33._8_4_;
            *(short *)((long)puVar17 + 0xc) = auVar33._12_2_;
          } while (uVar9 != uVar26);
        }
        puVar6 = PTR_DAT_084933e0;
        lVar12 = *(long *)PTR_DAT_084933e0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar12 = *(long *)puVar6;
        }
        FUN_073a7e90(&stack0x00000068,**(undefined8 **)(lVar12 + 0xb8),0);
        in_stack_00000048 = 0;
        uVar13 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
        uVar2 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
        in_stack_00000050 = &stack0x00000068;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_04758e58(uVar2,0,uVar9 - 1,uVar13,*(undefined8 *)UnityEngine_BoxCollider_var);
        FUN_073a7e9c(&stack0x00000068,0);
        in_stack_00000048 = 0;
        in_stack_00000050 = (undefined8 *)0x0;
        FUN_0517ed60(&stack0x00000048,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20),2,
                     *(undefined8 *)UnityEngine_Animations_Rigging_BlendConstraintData_var);
        uVar26 = (ulong)uVar9;
        in_stack_00000020[1] = (long)in_stack_00000050;
        *in_stack_00000020 = in_stack_00000048;
        if ((in_stack_00000010 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_0848c978 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_0776fddc(0);
          if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c60);
          }
          uVar26 = FUN_06751d94(uVar9,uVar11,0);
          uVar26 = uVar26 & 0xffffffff;
        }
        if (unaff_x28 != 0) {
          iVar7 = *(int *)(unaff_x28 + 0x34);
          if ((int)uVar26 < 1) {
            uVar28 = 1;
          }
          else {
            do {
              lVar15 = *in_stack_00000020 + uVar26 * 0xe;
              lVar12 = 0;
              uVar22 = *(ushort *)(lVar15 + -10);
              uVar3 = *(ushort *)(lVar15 + -2);
              uVar27 = uVar26;
              puVar19 = (ushort *)(*in_stack_00000020 + 4);
              do {
                uVar27 = uVar27 - 1;
                lVar12 = lVar12 + (int)((uint)*puVar19 * (uint)*puVar19);
                puVar19 = puVar19 + 7;
              } while (uVar27 != 0);
              uVar24 = 1;
              do {
                uVar28 = uVar24;
                uVar24 = uVar28 << 1;
              } while ((long)(iVar7 * iVar7) * (long)(int)uVar28 * (long)(int)uVar28 < lVar12);
              if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar24 = (uint)uVar3;
              iVar8 = FUN_07754a24(uVar24 & 1,0);
              if ((int)(iVar8 * uVar28) <= (int)(uint)uVar22) break;
              in_stack_00000058._4_4_ = uVar24 & 2;
              if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              iVar8 = FUN_07752358((long)&stack0x00000058 + 4,0);
              uVar24 = (int)uVar26 - iVar8;
              uVar26 = (ulong)uVar24;
            } while (0 < (int)uVar24);
          }
          puVar6 = PTR_DAT_08494748;
          uVar24 = (uint)uVar26;
          if ((int)uVar24 < (int)in_stack_00000020[1]) {
            lVar12 = (long)(int)uVar24;
            lVar15 = (-(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4) + (long)(int)uVar24 * -2
            ;
            do {
              lVar12 = lVar12 + 1;
              puVar17 = (undefined8 *)(*in_stack_00000020 + lVar15);
              lVar15 = lVar15 + 0xe;
              *puVar17 = 0;
              *(undefined2 *)((long)puVar17 + 0xc) = 0;
              *(undefined4 *)(puVar17 + 1) = 0;
            } while (lVar12 < (int)in_stack_00000020[1]);
          }
          in_stack_00000048 = 0;
          in_stack_00000050 = (undefined8 *)0x0;
          FUN_0510dee0(&stack0x00000048,unaff_x21,2,1,*(undefined8 *)puVar6);
          in_stack_00000020[3] = (long)in_stack_00000050;
          in_stack_00000020[2] = in_stack_00000048;
          if (0 < (int)in_stack_00000020[3]) {
            lVar15 = in_stack_00000020[2];
            lVar12 = 0;
            do {
              *(undefined4 *)(lVar15 + lVar12 * 4) = 0xffffffff;
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)in_stack_00000020[3]);
          }
          uVar26 = (ulong)(uVar24 - 1);
          if (-1 < (int)(uVar24 - 1)) {
            lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
            if (lVar12 == 0) goto LAB_07712d48;
            uVar20 = *(uint *)(lVar12 + 0x18);
            puVar19 = (ushort *)(lVar12 + uVar26 * 0xe + 0x20);
            uVar27 = uVar26;
            do {
              if (uVar20 <= uVar26) {
LAB_07712d9c:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              *(int *)(in_stack_00000020[2] + (ulong)*puVar19 * 4) = (int)uVar27;
              bVar34 = 0 < (long)uVar27;
              puVar19 = puVar19 + -7;
              uVar27 = uVar27 - 1;
            } while (bVar34);
          }
          lVar12 = **(long **)(*unaff_x23 + 0xb8);
          if (lVar12 != 0) {
LAB_07712b04:
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar18 = *(long *)UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var;
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 2;
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x18) == 0) {
                FUN_04e30a68(lVar12,0,CONCAT44(iVar7,iVar7),
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              else {
                *(undefined4 *)(lVar12 + 0x18) = 1;
                *(undefined8 *)(lVar15 + 0x20) = 0;
                *(ulong *)(lVar15 + 0x28) = CONCAT44(iVar7,iVar7);
              }
              if ((int)uVar24 < 1) {
                bVar34 = false;
              }
              else {
                uVar20 = 0;
                uVar27 = uVar26;
                do {
                  lVar12 = *in_stack_00000020 + (ulong)uVar20 * 0xe;
                  uVar22 = *(ushort *)(lVar12 + 4);
                  uVar5 = *(uint6 *)(lVar12 + 8);
                  if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  uVar4 = 0;
                  if (uVar28 != 0) {
                    uVar4 = uVar22 / uVar28;
                  }
                  iVar8 = FUN_07754a24((ulong)(uVar5 >> 0x20) & 1,0);
                  puVar6 = UnityEngine_BeforeRenderOrderAttribute_var;
                  bVar34 = (int)uVar4 < iVar8;
                  if ((int)uVar4 < iVar8) break;
                  lVar12 = **(long **)(*unaff_x23 + 0xb8);
                  if (lVar12 == 0) goto LAB_07712d48;
                  iVar8 = 0;
                  while( true ) {
                    if (*(int *)(lVar12 + 0x18) <= iVar8) {
                      uVar28 = uVar28 << 1;
                      lVar12 = **(long **)(*unaff_x23 + 0xb8);
                      if (lVar12 != 0) goto LAB_07712b04;
                      goto LAB_07712d48;
                    }
                    auVar33 = FUN_04e30768(lVar12,iVar8,*(undefined8 *)puVar6);
                    uVar14 = auVar33._0_8_;
                    if ((int)uVar4 <= auVar33._8_4_) break;
                    iVar8 = iVar8 + 1;
                    lVar12 = **(long **)(*unaff_x23 + 0xb8);
                    if (lVar12 == 0) goto LAB_07712d48;
                  }
                  uVar25 = uVar14 >> 0x20;
                  lVar12 = FUN_045fc318(*in_stack_00000020,in_stack_00000020[1],uVar20,
                                        *(undefined8 *)System_Collections_BitArray_var);
                  *(short *)(lVar12 + 6) = auVar33._0_2_;
                  lVar15 = *unaff_x23;
                  *(short *)(lVar12 + 8) = auVar33._4_2_;
                  *(short *)(lVar12 + 10) = (short)uVar4;
                  if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_07712d48;
                  FUN_04e3222c(**(long **)(lVar15 + 0xb8),iVar8,
                               *(undefined8 *)UnityEngine_EventSystems_BaseInput_var);
                  if ((int)(uVar20 - uVar24) < -1) {
                    iVar10 = 0;
                    uVar23 = uVar14 & 0xffffffff;
                    do {
                      uVar1 = (int)uVar23 + uVar4;
                      uVar23 = (ulong)uVar1;
                      if (auVar33._8_4_ + auVar33._0_4_ < (int)(uVar1 + uVar4)) {
                        uVar1 = (int)uVar25 + uVar4;
                        uVar25 = (ulong)uVar1;
                        uVar23 = uVar14 & 0xffffffff;
                        if (auVar33._12_4_ + auVar33._4_4_ < (int)(uVar1 + uVar4)) break;
                      }
                      if (**(long **)(*unaff_x23 + 0xb8) == 0) goto LAB_07712d48;
                      FUN_04e31838(**(long **)(*unaff_x23 + 0xb8),iVar8 + iVar10,
                                   uVar23 | uVar25 << 0x20,CONCAT44(uVar4,uVar4),
                                   *(undefined8 *)UnityEngine_UIElements_Background_var);
                      iVar10 = iVar10 + 1;
                    } while ((int)uVar27 != iVar10);
                  }
                  uVar27 = (ulong)((int)uVar27 - 1);
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar24);
              }
              *(bool *)(in_stack_00000020 + 5) = bVar34;
              *(uint *)(in_stack_00000020 + 4) = uVar24;
              *(uint *)((long)in_stack_00000020 + 0x24) = uVar9;
              *(uint *)((long)in_stack_00000020 + 0x2c) = uVar28;
              *(int *)(in_stack_00000020 + 6) = iVar7;
              return;
            }
          }
        }
      }
    }
  }
LAB_07712d48:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


