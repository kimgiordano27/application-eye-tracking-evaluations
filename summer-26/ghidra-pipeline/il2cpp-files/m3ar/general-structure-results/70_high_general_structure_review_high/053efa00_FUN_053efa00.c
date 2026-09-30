/*
FUNCTION_NAME: FUN_053efa00
ENTRY_POINT: 053efa00
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053efcdc) */

uint FUN_053efa00(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0953f866 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08f65880);
    DAT_0953f866 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_04097b88(PTR_DAT_08f65788);
    uVar6 = thunk_FUN_0406deb8();
    uVar7 = thunk_FUN_04097b88(PTR_DAT_08f6fc70);
    FUN_07443cfc(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar6,param_3);
  }
  if ((int)param_1[4] == 0) {
    uVar2 = 0;
  }
  else if (param_2 == param_1) {
    uVar2 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto 
          System_Array_InternalEnumerator<SerializedKeyValuePair<Int32Enum,_Dragon_AnimationData>>__Dispose
          ;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(param_2,lVar8,0);
System_Array_InternalEnumerator<SerializedKeyValuePair<Int32Enum,_Dragon_AnimationData>>__Dispose:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    puVar1 = PTR_DAT_08f65880;
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_053efb50;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)puVar1,0);
LAB_053efb50:
      uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        break;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_053efbd8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar5,lVar8,0);
LAB_053efbd8:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      uVar10 = FUN_053ede6c(param_1,uVar3,
                            *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
    } while ((uVar10 & 1) == 0);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_053efc70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f65868,0);
LAB_053efc70:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
  }
  return uVar2 & 1;
}


