/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 06964c58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Quatf___cctor(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar9;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  while (param_1 != 0) {
    iVar2 = FUN_06936294(param_1,0);
    puVar1 = PTR_DAT_08486c60;
    if (iVar2 <= unaff_w20) {
      lVar8 = *(long *)(unaff_x24 + 0x70);
      if (lVar8 != 0) {
        iVar2 = 0;
        iVar3 = -0x80000000;
        goto LAB_06964dc0;
      }
      break;
    }
    if (((*(long *)(unaff_x24 + 0x10) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0xe8), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) break;
    lVar8 = FUN_04de82e0(lVar8,unaff_w20,*unaff_x26);
    if (((*(long *)(unaff_x24 + 0x10) == 0) || (lVar8 == 0)) ||
       (lVar5 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0xd0), lVar5 == 0)) break;
    FUN_069641d0(lVar5,*(undefined8 *)(lVar8 + 0x80),lVar8 + 0x70,lVar8 + 0x78);
    iVar2 = *(int *)(lVar8 + 0x70);
    if (iVar2 < 0) {
      if (((*(long *)(unaff_x24 + 0x28) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x24 + 0x28) + 0x28), lVar5 == 0)) ||
         (plVar7 = *(long **)(lVar8 + 0x80), plVar7 == (long *)0x0)) break;
      (**(code **)(*plVar7 + 0x408))
                (plVar7,*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(*plVar7 + 0x410));
      if ((*(long *)(unaff_x24 + 0x28) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x24 + 0x28) + 0x28), lVar5 == 0)) break;
LAB_06964d88:
      FUN_0694cef4(*(undefined4 *)(lVar5 + 0x58),lVar8,0);
    }
    else {
      lVar5 = *(long *)(unaff_x24 + 0x70);
      if (lVar5 == 0) break;
      iVar3 = FUN_04d8be94(lVar5,iVar2,*unaff_x25);
      FUN_04d8bee8(lVar5,iVar2,iVar3 + 1,*unaff_x27);
      if (*(long *)(lVar8 + 0x78) == 0) break;
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x78) + 0x50);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_07c9c218(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x78) != 0) &&
           (plVar7 = *(long **)(lVar8 + 0x80), plVar7 != (long *)0x0)) {
          (**(code **)(*plVar7 + 0x408))
                    (plVar7,*(undefined8 *)(*(long *)(lVar8 + 0x78) + 0x50),
                     *(undefined8 *)(*plVar7 + 0x410));
          lVar5 = *(long *)(lVar8 + 0x78);
          if (lVar5 != 0) goto LAB_06964d88;
        }
        break;
      }
    }
    unaff_w20 = unaff_w20 + 1;
    if (*(long *)(unaff_x24 + 0x10) == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x24 + 0x10) + 0xe8);
  }
  goto LAB_06964e10;
  while( true ) {
    uVar4 = FUN_04d8be94(lVar8,iVar2,*unaff_x25);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    iVar3 = FUN_06751c44(iVar3,uVar4,0);
    lVar8 = *(long *)(unaff_x24 + 0x70);
    iVar2 = iVar2 + 1;
    if (lVar8 == 0) break;
LAB_06964dc0:
    if (*(int *)(lVar8 + 0x18) <= iVar2) {
      if ((iVar3 == 0) ||
         (iVar2 = FUN_04d8ce18(lVar8,iVar3,*(undefined8 *)PTR_DAT_0848c620), iVar2 < 0)) {
        uVar9 = 0;
        *(undefined8 *)(unaff_x24 + 0x78) = 0;
      }
      else {
        if (*(long *)(unaff_x24 + 0x28) == 0) break;
        lVar8 = *(long *)(*(long *)(unaff_x24 + 0x28) + 0x30);
        if ((lVar8 == 0) ||
           (lVar8 = FUN_04de82e0(lVar8,iVar2,*(undefined8 *)PTR_DAT_084b6e30), lVar8 == 0)) break;
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
        *(undefined8 *)(unaff_x24 + 0x78) = uVar9;
      }
      thunk_FUN_03afed3c(unaff_x24 + 0x78,uVar9);
      uVar4 = *(undefined4 *)(unaff_x24 + 0x30);
      uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar4,uVar9,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar9);
      *(undefined4 *)(unaff_x19 + 0x10) = 2;
      return 1;
    }
  }
LAB_06964e10:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


