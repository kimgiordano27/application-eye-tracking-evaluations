/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking
ENTRY_POINT: 0567ca70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StopFaceTracking(undefined8 param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int in_w8;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000090;
  undefined4 uStack00000000000000bc;
  
  uStack00000000000000bc = 0;
  if (in_ZR || in_NG != in_OV) {
    if (in_w8 == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = 0;
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      goto LAB_0567cbc4;
    }
    if (in_w8 != 1) {
      return param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 != 0) goto LAB_0567cacc;
  }
  else if (in_w8 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    while( true ) {
      puVar9 = (undefined8 *)(unaff_x19 + 0x30);
      plVar10 = (long *)*puVar9;
      if (plVar10 == (long *)0x0) break;
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0567cb94;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar10,*unaff_x23,0);
LAB_0567cb94:
      uVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar3 & 1) != 0) {
        plVar10 = (long *)*puVar9;
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 == 0) goto LAB_0567ccd8;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
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
          uVar3 = FUN_0566cc78();
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)(unaff_x20 + 0x214) = in_stack_00000090._4_4_;
          }
          uVar4 = FUN_05673ba0();
          *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
          LeanTween__value();
          goto LAB_0567cc3c;
        }
LAB_0567cbc4:
        if (unaff_x20 == 0) goto LAB_0567cbc8;
LAB_0567cacc:
        uVar2 = *(undefined4 *)(unaff_x20 + 0xc0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        iVar1 = FUN_05642d80(uVar2,0);
        if (iVar1 != 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = DAT_010fc3f0;
          return 1;
        }
        uVar3 = FUN_0566cbf8();
      } while ((uVar3 & 1) == 0);
      uVar4 = FUN_05673f7c();
      *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
      LeanTween__value();
    }
  }
  else {
    if (in_w8 != 3) {
      return param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
LAB_0567cc3c:
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0567ccf4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*unaff_x23,0);
LAB_0567ccf4:
      uVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 != 0) {
          FUN_0563e294(unaff_x20 + 0xd8,0);
          return 0;
        }
      }
      else {
        plVar10 = *(long **)(unaff_x19 + 0x28);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0567cd78;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_02dd004c(plVar10,*(long *)
                                         System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                                ,0);
LAB_0567cd78:
          uVar2 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          uVar6 = 3;
          goto LAB_0567cda8;
        }
      }
    }
  }
LAB_0567cbc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_0567ccc0:
    if (*(long *)(piVar8 + -2) ==
        *(long *)System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
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
  uVar6 = 2;
LAB_0567cda8:
  *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
  return 1;
}


