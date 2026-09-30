/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03390220
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03390504) */

ulong OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  long *unaff_x20;
  
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    FUN_02f41e9c(lVar4);
  }
  plVar2 = (long *)thunk_FUN_02f45174();
  puVar1 = PTR_DAT_067ca018;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_02f45174();
    if (plVar2 == (long *)0x0) {
      lVar4 = **(long **)(unaff_x19 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c(lVar4);
      }
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_033903a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_033903a4:
      plVar2 = (long *)(*(code *)*puVar3)();
      puVar1 = PTR_DAT_067c91b8;
      if (plVar2 != (long *)0x0) {
        uVar9 = 0;
        do {
          lVar4 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03390420;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02f421d0(plVar2,*(long *)puVar1,0);
LAB_03390420:
          uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar2 == (long *)0x0) goto LAB_033904b8;
            lVar4 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 == 0) goto LAB_03390490;
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_03390478;
          }
          if (uVar9 == 0x7fffffff) {
            FUN_02f089d8();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c();
          }
          uVar9 = uVar9 + 1;
        } while (plVar2 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)(*piVar8 + 1) * 0x10;
          goto LAB_03390378;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)*piVar8 * 0x10;
LAB_03390378:
          puVar3 = (undefined8 *)(lVar4 + 0x138);
          goto LAB_0339037c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 0;
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar2,lVar5,uVar6);
LAB_0339037c:
                    /* WARNING: Could not recover jumptable at 0x03390394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar7;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03390478:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033904ac;
    }
  }
LAB_03390490:
  puVar3 = (undefined8 *)FUN_02f421d0(plVar2,*(long *)PTR_DAT_067c91b0,0);
LAB_033904ac:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_033904b8:
  return (ulong)uVar9;
}


