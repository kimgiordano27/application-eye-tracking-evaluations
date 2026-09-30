/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.SetItemBatch400Response$$DeserializeIntoActualObject
ENTRY_POINT: 07712830
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_CloudSave_Internal_Models_SetItemBatch400Response__DeserializeIntoActualObject
               (undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint6 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long *unaff_x19;
  ulong uVar21;
  uint uVar22;
  long *unaff_x23;
  ulong uVar23;
  ulong uVar24;
  long *unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  ulong uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  uint uStack0000000000000004;
  ulong in_stack_00000010;
  bool bStack0000000000000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000048;
  undefined8 in_stack_00000058;
  
  FUN_073a7e90(param_2,*param_1);
  in_stack_00000048 = 0;
  uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
  uVar5 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04758e58(uVar5,0,unaff_w27 - 1,uVar4,*(undefined8 *)UnityEngine_BoxCollider_var);
  FUN_073a7e9c(&stack0x00000068,0);
  in_stack_00000048 = 0;
  FUN_0517ed60(&stack0x00000048,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20),2,
               *(undefined8 *)UnityEngine_Animations_Rigging_BlendConstraintData_var);
  uVar24 = (ulong)unaff_w27;
  unaff_x26[1] = 0;
  *unaff_x26 = in_stack_00000048;
  if ((in_stack_00000010 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0848c978 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0776fddc(0);
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c60);
    }
    uVar24 = FUN_06751d94(unaff_w27,uVar12,0);
    uVar24 = uVar24 & 0xffffffff;
  }
  if (unaff_x28 != 0) {
    iVar6 = *(int *)(unaff_x28 + 0x34);
    uStack0000000000000004 = unaff_w27;
    if ((int)uVar24 < 1) {
      uVar26 = 1;
    }
    else {
      do {
        lVar16 = *unaff_x26 + uVar24 * 0xe;
        lVar15 = 0;
        uVar7 = *(ushort *)(lVar16 + -10);
        uVar8 = *(ushort *)(lVar16 + -2);
        uVar25 = uVar24;
        puVar17 = (ushort *)(*unaff_x26 + 4);
        do {
          uVar25 = uVar25 - 1;
          lVar15 = lVar15 + (int)((uint)*puVar17 * (uint)*puVar17);
          puVar17 = puVar17 + 7;
        } while (uVar25 != 0);
        uVar22 = 1;
        do {
          uVar26 = uVar22;
          uVar22 = uVar26 << 1;
        } while ((long)(iVar6 * iVar6) * (long)(int)uVar26 * (long)(int)uVar26 < lVar15);
        if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar22 = (uint)uVar8;
        iVar13 = FUN_07754a24(uVar22 & 1,0);
        if ((int)(iVar13 * uVar26) <= (int)(uint)uVar7) break;
        in_stack_00000058._4_4_ = uVar22 & 2;
        if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar13 = FUN_07752358((long)&stack0x00000058 + 4,0);
        uVar22 = (int)uVar24 - iVar13;
        uVar24 = (ulong)uVar22;
      } while (0 < (int)uVar22);
    }
    puVar11 = PTR_DAT_08494748;
    uVar22 = (uint)uVar24;
    if ((int)uVar22 < (int)unaff_x26[1]) {
      lVar15 = (long)(int)uVar22;
      lVar16 = (-(uVar24 >> 0x1f) & 0xfffffff000000000 | uVar24 << 4) + (long)(int)uVar22 * -2;
      do {
        lVar15 = lVar15 + 1;
        puVar3 = (undefined8 *)(*unaff_x26 + lVar16);
        lVar16 = lVar16 + 0xe;
        *puVar3 = 0;
        *(undefined2 *)((long)puVar3 + 0xc) = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
      } while (lVar15 < (int)unaff_x26[1]);
    }
    in_stack_00000048 = 0;
    FUN_0510dee0(&stack0x00000048,in_stack_00000028,2,1,*(undefined8 *)puVar11);
    unaff_x26[3] = 0;
    unaff_x26[2] = in_stack_00000048;
    if (0 < (int)unaff_x26[3]) {
      lVar16 = unaff_x26[2];
      lVar15 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)unaff_x26[3]);
    }
    uVar24 = (ulong)(uVar22 - 1);
    if (-1 < (int)(uVar22 - 1)) {
      lVar15 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
      if (lVar15 == 0) goto LAB_07712d48;
      uVar19 = *(uint *)(lVar15 + 0x18);
      puVar17 = (ushort *)(lVar15 + uVar24 * 0xe + 0x20);
      uVar25 = uVar24;
      do {
        if (uVar19 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(int *)(unaff_x26[2] + (ulong)*puVar17 * 4) = (int)uVar25;
        bVar1 = 0 < (long)uVar25;
        puVar17 = puVar17 + -7;
        uVar25 = uVar25 - 1;
      } while (bVar1);
    }
    lVar15 = **(long **)(*unaff_x23 + 0xb8);
    if (lVar15 != 0) {
LAB_07712b04:
      lVar16 = *(long *)(lVar15 + 0x10);
      lVar18 = *(long *)UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var;
      *(undefined4 *)(lVar15 + 0x18) = 0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 2;
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x18) == 0) {
          FUN_04e30a68(lVar15,0,CONCAT44(iVar6,iVar6),
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar15 + 0x18) = 1;
          *(undefined8 *)(lVar16 + 0x20) = 0;
          *(ulong *)(lVar16 + 0x28) = CONCAT44(iVar6,iVar6);
        }
        if ((int)uVar22 < 1) {
          bStack0000000000000018 = false;
        }
        else {
          uVar19 = 0;
          uVar25 = uVar24;
          do {
            lVar15 = *unaff_x26 + (ulong)uVar19 * 0xe;
            uVar7 = *(ushort *)(lVar15 + 4);
            uVar10 = *(uint6 *)(lVar15 + 8);
            if (*(int *)(*(long *)System_ComponentModel_BooleanConverter_var + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar9 = 0;
            if (uVar26 != 0) {
              uVar9 = uVar7 / uVar26;
            }
            iVar13 = FUN_07754a24((ulong)(uVar10 >> 0x20) & 1,0);
            puVar11 = UnityEngine_BeforeRenderOrderAttribute_var;
            bStack0000000000000018 = (int)uVar9 < iVar13;
            if ((int)uVar9 < iVar13) break;
            lVar15 = **(long **)(*unaff_x23 + 0xb8);
            if (lVar15 == 0) goto LAB_07712d48;
            iVar13 = 0;
            while( true ) {
              if (*(int *)(lVar15 + 0x18) <= iVar13) {
                uVar26 = uVar26 << 1;
                lVar15 = **(long **)(*unaff_x23 + 0xb8);
                if (lVar15 != 0) goto LAB_07712b04;
                goto LAB_07712d48;
              }
              auVar27 = FUN_04e30768(lVar15,iVar13,*(undefined8 *)puVar11);
              uVar14 = auVar27._0_8_;
              if ((int)uVar9 <= auVar27._8_4_) break;
              iVar13 = iVar13 + 1;
              lVar15 = **(long **)(*unaff_x23 + 0xb8);
              if (lVar15 == 0) goto LAB_07712d48;
            }
            uVar23 = uVar14 >> 0x20;
            lVar15 = FUN_045fc318(*unaff_x26,unaff_x26[1],uVar19,
                                  *(undefined8 *)System_Collections_BitArray_var);
            *(short *)(lVar15 + 6) = auVar27._0_2_;
            lVar16 = *unaff_x23;
            *(short *)(lVar15 + 8) = auVar27._4_2_;
            *(short *)(lVar15 + 10) = (short)uVar9;
            if (**(long **)(lVar16 + 0xb8) == 0) goto LAB_07712d48;
            FUN_04e3222c(**(long **)(lVar16 + 0xb8),iVar13,
                         *(undefined8 *)UnityEngine_EventSystems_BaseInput_var);
            if ((int)(uVar19 - uVar22) < -1) {
              iVar20 = 0;
              uVar21 = uVar14 & 0xffffffff;
              do {
                uVar2 = (int)uVar21 + uVar9;
                uVar21 = (ulong)uVar2;
                if (auVar27._8_4_ + auVar27._0_4_ < (int)(uVar2 + uVar9)) {
                  uVar2 = (int)uVar23 + uVar9;
                  uVar23 = (ulong)uVar2;
                  uVar21 = uVar14 & 0xffffffff;
                  if (auVar27._12_4_ + auVar27._4_4_ < (int)(uVar2 + uVar9)) break;
                }
                if (**(long **)(*unaff_x23 + 0xb8) == 0) goto LAB_07712d48;
                FUN_04e31838(**(long **)(*unaff_x23 + 0xb8),iVar13 + iVar20,uVar21 | uVar23 << 0x20,
                             CONCAT44(uVar9,uVar9),
                             *(undefined8 *)UnityEngine_UIElements_Background_var);
                iVar20 = iVar20 + 1;
              } while ((int)uVar25 != iVar20);
            }
            uVar25 = (ulong)((int)uVar25 - 1);
            uVar19 = uVar19 + 1;
            unaff_x26 = in_stack_00000020;
          } while (uVar19 != uVar22);
        }
        *(bool *)(unaff_x26 + 5) = bStack0000000000000018;
        *(uint *)(unaff_x26 + 4) = uVar22;
        *(uint *)((long)unaff_x26 + 0x24) = uStack0000000000000004;
        *(uint *)((long)unaff_x26 + 0x2c) = uVar26;
        *(int *)(unaff_x26 + 6) = iVar6;
        return;
      }
    }
  }
LAB_07712d48:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


