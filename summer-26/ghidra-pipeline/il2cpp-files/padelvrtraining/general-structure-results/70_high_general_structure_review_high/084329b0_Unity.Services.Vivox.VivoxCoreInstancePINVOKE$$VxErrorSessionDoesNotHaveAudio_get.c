/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorSessionDoesNotHaveAudio_get
ENTRY_POINT: 084329b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08432dcc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorSessionDoesNotHaveAudio_get
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08432a00;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
LAB_08432a00:
    uVar4 = (*(code *)*puVar3)();
                    /* try { // try from 08432a0c to 08532a0f has its CatchHandler @ 08432ee4 */
    FUN_06fc5244(*(undefined8 *)PTR_DAT_091a8618,uVar4,0);
    if (unaff_x19 == 0)
    goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxAccessTokenInvalidSignature_get;
    FUN_06b6dddc();
  }
  if (*(int *)(*(long *)PTR_DAT_091a0bf0 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a08fd8(0);
  puVar1 = PTR_DAT_091a2770;
  if (unaff_x19 != 0) {
    FUN_06b6dddc();
    FUN_06b6dddc();
    uVar4 = FUN_03d2d394(*(undefined8 *)puVar1,0);
    lVar6 = FUN_03d2d394(*(undefined8 *)puVar1,1);
    puVar1 = PTR_DAT_091baaa8;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_091a85f0;
      uVar5 = thunk_FUN_03d1023c();
      uVar5 = FUN_08432024(uVar5,lVar6);
      uVar7 = FUN_06fd246c(uVar5,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_06b6dddc();
      }
      uVar5 = *(undefined8 *)puVar1;
      uVar4 = FUN_084320fc(uVar7,uVar4);
      uVar7 = FUN_06fd246c(uVar4,0);
      if ((((uVar7 & 1) == 0) ||
          (uVar7 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091a5a20,0), (uVar7 & 1) != 0))
         || (uVar7 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar7 & 1) != 0))
      {
        FUN_06b6dddc();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar9 = *(long **)(unaff_x20 + 0x28);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091af380) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08432c38;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091af380,0);
LAB_08432c38:
      plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
      puVar2 = PTR_DAT_091af388;
      puVar1 = PTR_DAT_091a1508;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08432cb0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,0);
LAB_08432cb0:
        uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if ((uVar7 & 1) == 0) goto LAB_08432d38;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08432d0c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar2,0);
LAB_08432d0c:
        (*(code *)*puVar3)(plVar9,puVar3[1]);
        FUN_06b6ddc8();
      } while( true );
    }
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxAccessTokenInvalidSignature_get:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_08432d38:
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08432d94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_08432d94:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  return;
}


