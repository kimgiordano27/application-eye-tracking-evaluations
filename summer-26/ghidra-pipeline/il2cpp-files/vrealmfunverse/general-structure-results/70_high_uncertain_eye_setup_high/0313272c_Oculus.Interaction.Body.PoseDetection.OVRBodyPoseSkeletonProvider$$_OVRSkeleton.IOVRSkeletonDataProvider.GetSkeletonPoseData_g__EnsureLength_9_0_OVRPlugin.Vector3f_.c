/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0<OVRPlugin.Vector3f>
ENTRY_POINT: 0313272c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03132a64) */
/* WARNING: Removing unreachable block (ram,0x03132be0) */
/* WARNING: Removing unreachable block (ram,0x03132be4) */
/* WARNING: Removing unreachable block (ram,0x03132c20) */

void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  long *unaff_x24;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000110;
  undefined8 in_stack_00000120;
  long *in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  
  FUN_02b76274();
  puVar6 = *(undefined8 **)(unaff_x22 + 0x38);
  in_stack_00000128 = (long *)0x0;
  in_stack_00000130 = 0;
  in_stack_00000120 = 0;
  in_stack_00000110 = (long *)0x0;
  unaff_x24[9] = 0;
  unaff_x24[8] = 0;
  unaff_x24[0xb] = 0;
  unaff_x24[10] = 0;
  unaff_x24[0xd] = 0;
  unaff_x24[0xc] = 0;
  unaff_x24[0xf] = 0;
  unaff_x24[0xe] = 0;
  puVar1 = PTR_DAT_06312310;
  unaff_x24[1] = 0;
  *unaff_x24 = 0;
  unaff_x24[3] = 0;
  unaff_x24[2] = 0;
  unaff_x24[5] = 0;
  unaff_x24[4] = 0;
  unaff_x24[7] = 0;
  unaff_x24[6] = 0;
  in_stack_00000088 = 0;
  uVar9 = *puVar6;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(uVar9,0);
  uVar2 = FUN_05ea4780();
  if ((uVar2 & 1) == 0) {
    FUN_04ae9aac(&stack0x00000130,*(undefined8 *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 8));
    in_stack_00000080 = &stack0x00000138;
    in_stack_00000070 = 0;
    lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x20);
    in_stack_00000078 = &stack0x00000130;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar5);
    }
    plVar3 = (long *)thunk_FUN_02b79548();
    if (plVar3 == (long *)0x0) {
      lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar5);
      }
      lVar5 = thunk_FUN_02b79548();
      if (lVar5 == 0) {
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x18);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218(lVar5);
        }
        lVar7 = *unaff_x21;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_03132a7c;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c();
LAB_03132a7c:
        (*(code *)*puVar6)(&stack0x00000018);
        lVar5 = *(long *)(in_stack_00000138 + 0x38);
        unaff_x24[1] = (long)in_stack_00000020;
        *unaff_x24 = in_stack_00000018;
        unaff_x24[3] = in_stack_00000030;
        unaff_x24[2] = (long)in_stack_00000028;
        unaff_x24[5] = in_stack_00000040;
        unaff_x24[4] = in_stack_00000038;
        lVar5 = *(long *)(lVar5 + 0x70);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_03c228d8(&stack0x00000018,&stack0x00000090,
                     *(undefined8 *)(*(long *)(in_stack_00000138 + 0x38) + 0x68));
        memcpy(&stack0x000000c0,&stack0x00000018,0x58);
        in_stack_00000028 = &stack0x00000138;
        in_stack_00000018 = 0;
        in_stack_00000020 = (undefined8 *)&stack0x000000c0;
        while (uVar2 = FUN_04736a94(&stack0x000000c0,
                                    *(undefined8 *)(*(long *)(in_stack_00000138 + 0x38) + 0x98)),
              plVar3 = in_stack_00000110, (uVar2 & 1) != 0) {
          FUN_05ebf474(&stack0x00000088,*(undefined8 *)(unaff_x19 + 0x10),in_stack_00000110,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x48);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar7 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03132bac;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_03132bac:
          (*(code *)*puVar6)(plVar3);
          FUN_05ebf8b0(&stack0x00000088,0);
        }
        FUN_04736ee8(in_stack_00000020,*(undefined8 *)(*(long *)(*in_stack_00000028 + 0x38) + 0xa0))
        ;
        if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cabc();
        }
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar7 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_031328e0;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_031328e0:
      uVar2 = (*(code *)*puVar6)(plVar3);
      plVar3 = in_stack_00000128;
      if ((uVar2 & 1) == 0) {
        uVar9 = **(undefined8 **)(in_stack_00000138 + 0x38);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_04d8a7b0(uVar9,0);
        FUN_05ea48a0();
      }
      else {
        if (in_stack_00000128 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *in_stack_00000128;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0631ea98) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0313299c;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000128,*(long *)PTR_DAT_0631ea98,1);
LAB_0313299c:
        uVar4 = (*(code *)*puVar6)(plVar3,puVar6[1]);
        FUN_05ebf6b4(&stack0x00000120,uVar9,0,uVar4,0);
        plVar3 = in_stack_00000128;
        in_stack_00000018 = 0;
        in_stack_00000020 = &stack0x00000120;
        if (in_stack_00000128 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *(long *)(*(long *)(in_stack_00000138 + 0x38) + 0x48);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218(lVar5);
        }
        lVar7 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03132a3c;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_03132a3c:
        (*(code *)*puVar6)(plVar3);
        FUN_05ebf8b0(&stack0x00000120,0);
      }
    }
    FUN_04ae9b70(in_stack_00000078,*(undefined8 *)(*(long *)(*in_stack_00000080 + 0x38) + 0xb0));
    if (in_stack_00000070 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
  }
  return;
}


