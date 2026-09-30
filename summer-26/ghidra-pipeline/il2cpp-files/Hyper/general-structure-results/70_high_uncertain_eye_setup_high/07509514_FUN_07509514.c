/*
FUNCTION_NAME: FUN_07509514
ENTRY_POINT: 07509514
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07509948) */

void FUN_07509514(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_0ac42228;
  if ((DAT_0b327256 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac15120);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac09ba8);
    FUN_04947ee4(PTR_DAT_0ac42228);
    DAT_0b327256 = 1;
  }
  FUN_05d9c0d0(param_2,*(undefined8 *)puVar2,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x118));
  lVar4 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  puVar2 = PTR_DAT_0ac15120;
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)thunk_FUN_04983e64(0,*(undefined8 *)PTR_DAT_0ac15120);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  else {
    if (*param_2 == lVar4) {
      FUN_075091ec(param_1,(int)param_2[3] + *(int *)(param_1 + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      FUN_08d9f1fc(param_2[2],0,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                   (int)param_2[3],0);
      iVar3 = (int)param_2[3] + *(int *)(param_1 + 0x18);
      goto LAB_07509790;
    }
    plVar5 = (long *)thunk_FUN_04983e64(param_2,*(undefined8 *)PTR_DAT_0ac15120);
    if (plVar5 == (long *)0x0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34(lVar4);
      }
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_075097b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(param_2,lVar4,0);
LAB_075097b8:
      plVar5 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
      puVar2 = PTR_DAT_0ac09ba8;
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto System_Span<OVRPlugin_Vector4f>__op_Implicit;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar5,*(long *)puVar2,0);
System_Span<OVRPlugin_Vector4f>__op_Implicit:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 == 0) goto LAB_0750991c;
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_07509904;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04980b34(lVar4);
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_075098b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar5,lVar4,0);
LAB_075098b0:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        FUN_0750934c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
      } while( true );
    }
  }
  lVar7 = *plVar5;
  lVar4 = *(long *)puVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_075096f4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar5,lVar4,1);
LAB_075096f4:
  iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  FUN_075091ec(param_1,*(int *)(param_1 + 0x18) + iVar3,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  lVar7 = *plVar5;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = *(long *)puVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07509774;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar5,lVar4,0);
LAB_07509774:
  (*(code *)*puVar6)(plVar5,uVar10,uVar1,puVar6[1]);
  iVar3 = *(int *)(param_1 + 0x18) + iVar3;
LAB_07509790:
  *(int *)(param_1 + 0x18) = iVar3;
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07509904:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07509938;
    }
  }
LAB_0750991c:
  puVar6 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac09b90,0);
LAB_07509938:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


