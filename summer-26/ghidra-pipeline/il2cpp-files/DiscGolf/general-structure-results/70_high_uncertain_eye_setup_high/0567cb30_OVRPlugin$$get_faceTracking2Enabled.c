/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 0567cb30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_faceTracking2Enabled(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000090;
  
  while( true ) {
    *(undefined8 *)(unaff_x19 + 0x30) = param_2;
    LeanTween__value();
    puVar9 = (undefined8 *)(unaff_x19 + 0x30);
    plVar10 = (long *)*puVar9;
    if (plVar10 == (long *)0x0) break;
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0567cb94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar10,*unaff_x23,0);
LAB_0567cb94:
    uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar7 & 1) != 0) {
      plVar10 = (long *)*puVar9;
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0567ccd8;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0567ccc0;
      }
      break;
    }
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    LeanTween__value(puVar9,0);
    do {
      if (*(char *)(unaff_x19 + 0x20) != '\0') {
        if (unaff_x20 == 0) goto LAB_0567cbc8;
        if ((*(int *)(unaff_x20 + 0x1b8) == 1) && (iVar1 = FUN_056695a0(), 0 < iVar1)) {
          *(undefined4 *)(unaff_x20 + 0x1b8) = 2;
          FUN_05676b8c();
        }
        uVar7 = FUN_0566cc78();
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)(unaff_x20 + 0x214) = in_stack_00000090._4_4_;
        }
        uVar4 = FUN_05673ba0();
        *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
        LeanTween__value();
        plVar10 = *(long **)(unaff_x19 + 0x28);
        if (plVar10 == (long *)0x0) goto LAB_0567cbc8;
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0567cc74;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0567cc5c;
      }
      if (unaff_x20 == 0) goto LAB_0567cbc8;
      uVar2 = *(undefined4 *)(unaff_x20 + 0xc0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar1 = FUN_05642d80(uVar2,0);
      if (iVar1 != 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = DAT_010fc3f0;
        return 1;
      }
      uVar7 = FUN_0566cbf8();
    } while ((uVar7 & 1) == 0);
    param_2 = FUN_05673f7c();
  }
  goto LAB_0567cbc8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0567ccc0:
    if (*(long *)(piVar8 + -2) ==
        *(long *)System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0567cd98;
    }
  }
LAB_0567ccd8:
  puVar9 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                        ,0);
LAB_0567cd98:
  uVar2 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  uVar5 = 2;
LAB_0567cda8:
  *(undefined4 *)(unaff_x19 + 0x10) = uVar5;
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
  return 1;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0567cc5c:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0567ccf4;
    }
  }
LAB_0567cc74:
  puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*unaff_x23,0);
LAB_0567ccf4:
  uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  if ((uVar7 & 1) == 0) {
    if (unaff_x20 != 0) {
      FUN_0563e294(unaff_x20 + 0xd8,0);
      return 0;
    }
  }
  else {
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0567cd78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                            ,0);
LAB_0567cd78:
      uVar2 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      uVar5 = 3;
      goto LAB_0567cda8;
    }
  }
LAB_0567cbc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


