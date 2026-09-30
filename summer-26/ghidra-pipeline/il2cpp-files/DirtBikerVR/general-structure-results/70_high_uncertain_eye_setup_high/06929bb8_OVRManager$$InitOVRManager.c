/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 06929bb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06929e28) */

void OVRManager__InitOVRManager(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0897ced2 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(PTR_DAT_08486ff8);
    DAT_0897ced2 = 1;
  }
  if (param_1 != 0) {
    lVar6 = FUN_07c99058(param_1,0);
    uVar5 = FUN_07c9db38(param_2,0);
    puVar4 = PTR_DAT_08488568;
    puVar3 = PTR_DAT_08488550;
    puVar2 = PTR_DAT_08486ff8;
    if (lVar6 != 0) {
      FUN_07c9c820(lVar6,uVar5,0);
      plVar7 = (long *)FUN_07cae9b8(param_1,0);
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = *plVar7;
        lVar6 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06929cd0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,lVar6,0);
LAB_06929cd0:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_03ac73c0(plVar7,*(undefined8 *)puVar3);
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar7;
          lVar6 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_06929dd4;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_06929dbc;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = *plVar7;
        lVar6 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06929d38;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,lVar6,1);
LAB_06929d38:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40();
          }
        }
        FUN_06929bb4(plVar9,param_2);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06929dbc:
    if (*(long *)(piVar12 + -2) == lVar6) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06929df0;
    }
  }
LAB_06929dd4:
  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,lVar6,0);
LAB_06929df0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


