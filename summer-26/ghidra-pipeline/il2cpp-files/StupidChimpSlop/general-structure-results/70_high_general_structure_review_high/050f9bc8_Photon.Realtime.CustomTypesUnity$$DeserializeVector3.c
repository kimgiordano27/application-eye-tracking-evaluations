/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 050f9bc8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050f9c64) */

void Photon_Realtime_CustomTypesUnity__DeserializeVector3(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x28;
  int unaff_w29;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  
  if (unaff_w29 == 0) {
    do {
      (**(code **)(*unaff_x22 + 0x208))(unaff_x22);
LAB_050f9bf4:
      uVar4 = FUN_0579f4fc(0);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*unaff_x22 + 0x1c8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1d0));
      }
      plVar5 = in_stack_00000058;
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *in_stack_00000058;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_050f9a98;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d87540(in_stack_00000058,*unaff_x24,0);
LAB_050f9a98:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      plVar5 = in_stack_00000058;
      if ((uVar4 & 1) == 0) goto LAB_050f9ccc;
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *in_stack_00000058;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_050f9b00;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d87540(in_stack_00000058,*unaff_x24,1);
LAB_050f9b00:
      unaff_x22 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *unaff_x22;
      bVar1 = *(byte *)(*unaff_x25 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(unaff_x22);
      }
      uVar4 = (**(code **)(lVar6 + 0x1a8))(unaff_x22,*(undefined8 *)(lVar6 + 0x1b0));
    } while ((uVar4 & 1) != 0);
    in_stack_00000048._4_1_ = '\0';
    in_stack_00000050 = unaff_x22;
    FUN_05065dd8(unaff_x22,(long)&stack0x00000048 + 4,0);
    (**(code **)(*unaff_x22 + 0x208))(unaff_x22);
    if (in_stack_00000048._4_1_ != '\0') {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*unaff_x28,0);
    }
    goto LAB_050f9bf4;
  }
LAB_050f9ccc:
  puVar2 = PTR_DAT_066479a8;
  plVar5 = (long *)thunk_FUN_02d8a53c(*in_stack_00000030,*(undefined8 *)PTR_DAT_066479a8);
  *in_stack_00000038 = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_050f9d40;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d87540(plVar5,*(long *)puVar2,0);
LAB_050f9d40:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee0();
  }
  return;
}


