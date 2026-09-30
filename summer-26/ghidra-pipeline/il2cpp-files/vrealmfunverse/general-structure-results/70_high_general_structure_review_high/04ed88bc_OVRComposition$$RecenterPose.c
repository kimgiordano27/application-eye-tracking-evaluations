/*
FUNCTION_NAME: OVRComposition$$RecenterPose
ENTRY_POINT: 04ed88bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1
*/


undefined8 OVRComposition__RecenterPose(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s8;
  float fVar8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  float in_stack_00000018;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000240;
  float in_stack_00000248;
  float in_stack_00000254;
  undefined8 in_stack_00000258;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04ed8904;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(unaff_x23,*unaff_x25,0);
LAB_04ed8904:
    lVar4 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_05c9a068(unaff_s8,unaff_s9,unaff_s10,lVar4,0);
    uVar5 = FUN_04ed91e8();
    if ((uVar5 & 1) != 0) {
      fVar8 = (float)((ulong)unaff_d13 >> 0x20) *
              ((float)((ulong)*unaff_x24 >> 0x20) - (float)((ulong)unaff_d14 >> 0x20)) +
              unaff_s11 * (*(float *)(unaff_x20 + 0x27) - unaff_s12) +
              (float)unaff_d13 * ((float)*unaff_x24 - (float)unaff_d14);
      if (*(float *)(unaff_x20 + 0x25) <= ABS(fVar8)) {
        if (0.0 < fVar8) goto LAB_04ed89a0;
      }
      else {
        iVar2 = (**(code **)(*unaff_x20 + 0x548))();
        if (0.0 < fVar8 && iVar2 < 1) {
LAB_04ed89a0:
          if (((fVar8 <= *(float *)(unaff_x22 + 0x110)) &&
              (fVar8 = (float)FUN_04ed92f8((int)unaff_x20[0x27],
                                           *(undefined4 *)((long)unaff_x20 + 0x13c),
                                           (int)unaff_x20[0x28]),
              fVar8 <= *(float *)(unaff_x22 + 0xdc))) && (fVar8 <= in_stack_00000018)) {
LAB_04ed89dc:
            FUN_0476d0f4(in_stack_00000058,
                         *(undefined8 *)
                          UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
            if (in_stack_00000050 == 0) {
              uVar1 = 0;
              if ((unaff_x21 & 1) == 0) {
                uVar1 = unaff_x19;
              }
              return uVar1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02b3cabc(in_stack_00000050);
          }
        }
      }
    }
    do {
      uVar5 = FUN_0476d0f8(&stack0x00000230,*unaff_x26);
      unaff_x21 = uVar5 & 0xffffffff;
      if ((uVar5 & 1) == 0) goto LAB_04ed89dc;
      unaff_d14 = *(undefined8 *)(unaff_x28 + 0xdc);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_05c8e378(in_stack_00000240);
    } while ((uVar5 & 1) != 0);
    if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = FUN_0452a68c(unaff_x20[0x41],in_stack_00000240,*unaff_x27);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000240 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar7 = *(long **)(in_stack_00000240 + 0xd0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04ed878c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x29,0);
LAB_04ed878c:
      plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04ed87ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x25,0);
LAB_04ed87ec:
      lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c9cbb4(&stack0x00000060,lVar4,0);
    }
    else {
      if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0452a300(&stack0x00000060,unaff_x20[0x41],in_stack_00000240,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                  );
    }
    in_stack_000000b8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    in_stack_000000d8 = in_stack_00000088;
    in_stack_000000d0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_00000098;
    in_stack_000000e0 = in_stack_00000090;
    unaff_s10 = *(undefined4 *)((long)unaff_x20 + 0x164);
    in_stack_00000138 = in_stack_00000068;
    in_stack_00000130 = in_stack_00000060;
    in_stack_00000148 = in_stack_00000078;
    in_stack_00000140 = in_stack_00000070;
    unaff_s9 = (undefined4)unaff_x20[0x2c];
    in_stack_00000158 = in_stack_00000088;
    in_stack_00000150 = in_stack_00000080;
    in_stack_00000168 = in_stack_00000098;
    in_stack_00000160 = in_stack_00000090;
    unaff_s8 = FUN_05c79210(*(undefined4 *)((long)unaff_x20 + 0x15c),&stack0x00000130,0);
    if (in_stack_00000240 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar7 = *(long **)(in_stack_00000240 + 0xd0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04ed88a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x29,0);
LAB_04ed88a4:
    unaff_x23 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = *unaff_x23;
    unaff_x22 = in_stack_00000240;
    unaff_d13 = in_stack_00000258;
    unaff_s12 = in_stack_00000248;
    unaff_s11 = in_stack_00000254;
  } while( true );
}


