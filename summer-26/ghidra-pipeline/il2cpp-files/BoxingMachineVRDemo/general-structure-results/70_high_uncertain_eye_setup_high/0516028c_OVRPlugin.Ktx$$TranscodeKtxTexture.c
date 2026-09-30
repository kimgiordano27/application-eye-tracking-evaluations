/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 0516028c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0516052c) */

long OVRPlugin_Ktx__TranscodeKtxTexture(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03aabc60(param_2,**(undefined8 **)(param_1 + 0x428));
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  thunk_FUN_02dd37b4();
  lVar5 = FUN_0516177c();
  if ((lVar5 == 0) || (plVar6 = (long *)FUN_0552c8d0(lVar5,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06782418) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05160350;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06782418,0);
LAB_05160350:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = PTR_DAT_06782420;
  puVar3 = PTR_DAT_067823b8;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_65_0__ovrp_KtxTranscode;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
OVRPlugin_OVRP_1_65_0__ovrp_KtxTranscode:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05160500;
      lVar5 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 == 0) goto LAB_051604d8;
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05160424;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar4,0);
LAB_05160424:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    lVar5 = *unaff_x19;
    uVar8 = FUN_05161244();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)puVar3;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar5,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_051604f4;
    }
  }
LAB_051604d8:
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d0,0);
LAB_051604f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_05160500:
  return *unaff_x19;
}


