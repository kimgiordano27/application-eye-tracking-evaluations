/*
FUNCTION_NAME: FUN_062ed4d8
ENTRY_POINT: 062ed4d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x062edaec) */

void FUN_062ed4d8(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_06b8bdf8 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06769cf0);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcages_f32__);
    FUN_02d6084c(PTR_DAT_0676a930);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcagt_f32__);
    FUN_02d6084c(PTR_DAT_0676a938);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_u16__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_s8__);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06b8bdf8 = 1;
  }
  puVar1 = PTR_DAT_06769cf0;
  if ((*(ushort *)(param_1 + 0x68) < 0x21) &&
     ((1L << ((ulong)*(ushort *)(param_1 + 0x68) & 0x3f) & 0x100000408U) != 0)) {
    plVar2 = (long *)FUN_03dbbce0(1,*(undefined4 *)(param_1 + 100),
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_s8__);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar2[7] = *(long *)(param_1 + 0x38);
    thunk_FUN_02dd37b4();
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062ed69c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar1,0);
LAB_062ed69c:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar4 + 0x188))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 400));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PTR_DAT_0675f3d0;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_062edabc;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x6c) == 0x1b) {
    plVar2 = (long *)FUN_03dbbce0(1,*(undefined4 *)(param_1 + 100),
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_u16__)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar2[7] = *(long *)(param_1 + 0x38);
    thunk_FUN_02dd37b4();
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062ed834;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar1,0);
LAB_062ed834:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar4 + 0x188))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 400));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PTR_DAT_0675f3d0;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_062edabc;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    uVar9 = FUN_062eddd0(param_1);
    if ((uVar9 & 1) == 0) {
      switch(*(undefined4 *)(param_1 + 0x6c)) {
      case 0x111:
        if (DAT_06b77dae == '\0') {
          FUN_02d6084c(PTR_DAT_06762360);
          DAT_06b77dae = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x10);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x14);
        break;
      case 0x112:
        if (DAT_06b78252 == '\0') {
          FUN_02d6084c(PTR_DAT_06762360);
          DAT_06b78252 = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x18);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x1c);
        break;
      case 0x113:
        if (DAT_06b78251 == '\0') {
          FUN_02d6084c(PTR_DAT_06762360);
          DAT_06b78251 = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x28);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x2c);
        break;
      case 0x114:
        if (DAT_06b78250 == '\0') {
          FUN_02d6084c(PTR_DAT_06762360);
          DAT_06b78250 = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x20);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0x24);
        break;
      default:
        return;
      }
      uVar12 = *puVar10;
      uVar13 = *puVar8;
      uVar5 = *(undefined4 *)(param_1 + 100);
      if (*(int *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar2 = (long *)FUN_062edf64(uVar13,uVar12,1,uVar5);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar2[7] = *(long *)(param_1 + 0x38);
      thunk_FUN_02dd37b4();
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_062eda58;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar1,0);
LAB_062eda58:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 400));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)PTR_DAT_0675f3d0;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_062edabc;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
    else {
      uVar9 = FUN_039136b0(param_1,*(undefined8 *)PTR_DAT_0676a938);
      uVar12 = *(undefined4 *)(param_1 + 100);
      uVar5 = 5;
      if ((uVar9 & 1) != 0) {
        uVar5 = 6;
      }
      if (*(int *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar2 = (long *)FUN_062edeb8(uVar5,1,uVar12);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar2[7] = *(long *)(param_1 + 0x38);
      thunk_FUN_02dd37b4();
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_062ed8a4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar1,0);
LAB_062ed8a4:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 400));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)PTR_DAT_0675f3d0;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_062edabc;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar2,lVar6,0);
LAB_062edac8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
LAB_062edabc:
  puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
  goto LAB_062edac8;
}


