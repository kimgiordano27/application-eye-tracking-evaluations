/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetColorAtPosition
ENTRY_POINT: 072e0340
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072e071c) */

void Meta_XR_MRUtilityKit_SpaceMapGPU__GetColorAtPosition(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x21;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *in_stack_00000000;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  long *plStack0000000000000038;
  long *in_stack_00000058;
  
  puVar6 = PTR_DAT_092c4178;
  puVar5 = PTR_DAT_092c4168;
  puVar4 = PTR_DAT_092c4158;
  puVar3 = PTR_DAT_092860c8;
  plStack0000000000000038 = param_1;
  do {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar12 = *unaff_x21;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_072e03b8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(unaff_x21,lVar11,0);
LAB_072e03b8:
    uVar13 = (*(code *)*puVar7)(unaff_x21,puVar7[1]);
    plVar8 = in_stack_00000058;
    puVar2 = PTR_DAT_092860c0;
    if ((uVar13 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_040b4e00(in_stack_00000058,*(undefined8 *)PTR_DAT_092860c0);
      *plStack0000000000000038 = (long)plVar8;
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_072e069c;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar12 = *in_stack_00000058;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_072e0420;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000058,lVar11,1);
LAB_072e0420:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    puVar9 = (undefined4 *)thunk_FUN_040b5044();
    uVar15 = *unaff_x24;
    uVar1 = *puVar9;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar11 = FUN_0768890c(uVar15,0);
    in_stack_00000010 = *(undefined8 *)puVar4;
    in_stack_00000018 = 0xffffffffffffffff;
    in_stack_00000020 = uVar1;
    uVar15 = FUN_076b01b4(&stack0x00000010,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar15,uVar15);
    }
    uVar15 = FUN_07694278(lVar11,uVar15,0);
    plVar8 = (long *)FUN_04f54134(uVar15,*(undefined8 *)puVar5);
    if (plVar8 == (long *)0x0) {
      plVar16 = (long *)*in_stack_00000000;
      uVar15 = FUN_072dffb4(3);
      plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar1);
      lVar11 = thunk_FUN_040b4b34(*(undefined8 *)puVar4,&stack0x00000010);
      if (plVar8 == (long *)0x0) {
LAB_072e06f8:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
        uVar15 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar15,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar8[4] = lVar11;
      thunk_FUN_040ec700(plVar8 + 4,lVar11);
      if (plVar16 == (long *)0x0) goto LAB_072e06f8;
      lVar11 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_092c4198;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092b9200) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072e05dc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar16,*(long *)PTR_DAT_092b9200,0xe);
LAB_072e05dc:
      (*(code *)*puVar7)(plVar16,uVar15,uVar10,plVar8,puVar7[1]);
      lVar11 = *in_stack_00000008;
      uVar15 = FUN_072dffb4(uVar1);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar15,uVar15);
      }
      FUN_06d20104(lVar11,uVar15,*(undefined8 *)PTR_DAT_092c4190,*(undefined8 *)puVar6);
      unaff_x21 = in_stack_00000058;
      param_2 = in_stack_00000058;
    }
    else {
      lVar11 = *in_stack_00000008;
      uVar15 = FUN_072dffb4(uVar1);
      uVar10 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_06d20104(lVar11,uVar15,uVar10,*(undefined8 *)puVar6);
      unaff_x21 = in_stack_00000058;
      param_2 = in_stack_00000058;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_072e06b8;
    }
  }
LAB_072e069c:
  puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar2,0);
LAB_072e06b8:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


