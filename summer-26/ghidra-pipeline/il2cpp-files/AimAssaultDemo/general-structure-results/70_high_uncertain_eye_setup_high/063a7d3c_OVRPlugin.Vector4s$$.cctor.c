/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 063a7d3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s___cctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x26;
  
                    /* try { // try from 063a7d40 to 064a7d43 has its CatchHandler @ 063a7e54 */
  puVar3 = (undefined8 *)FUN_0377596c();
                    /* try { // try from 063a7d60 to 064a7d67 has its CatchHandler @ 063a7e64 */
  iVar2 = (*(code *)*puVar3)();
  if (iVar2 == 3) {
                    /* try { // try from 063a7d6c to 064a7d73 has its CatchHandler @ 063a7e60 */
    lVar5 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_063a8078;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
    lVar5 = (*(code *)*puVar3)();
    if ((lVar5 != 0) && (plVar4 = (long *)FUN_049cec24(lVar5,0,*unaff_x24), plVar4 != (long *)0x0))
    {
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_063a80ec;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x26,5);
LAB_063a80ec:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x698))();
        goto LAB_063a7fc4;
      }
    }
  }
  else {
    lVar5 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_063a7dfc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
    lVar5 = (*(code *)*puVar3)();
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
        lVar5 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_063a7e64;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
        lVar5 = (*(code *)*puVar3)();
        puVar1 = PTR_DAT_07db6d50;
        if (lVar5 == 0) goto LAB_063a817c;
        if (*(int *)(lVar5 + 0x18) == 0) {
          lVar5 = thunk_FUN_037787d0();
          if (lVar5 == 0) {
                    /* try { // try from 063a8280 to 064a828b has its CatchHandler @ 063a82c4 */
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          lVar5 = *(long *)puVar1;
          plVar4 = (long *)thunk_FUN_037787d0();
          if (plVar4 == (long *)0x0) {
                    /* catch() { ... } // from try @ 063a81bc with catch @ 063a81cc */
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_063a8128;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar4,lVar5,2);
LAB_063a8128:
          uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar7 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
            (**(code **)(*unaff_x19 + 0x698))();
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
            pcVar8 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
            (*pcVar8)();
          }
LAB_063a7fc4:
          (**(code **)(*unaff_x20 + 0x1e8))();
          return;
        }
      }
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x578))();
        puVar1 = PTR_DAT_07db6c18;
        iVar2 = 0;
        do {
          lVar5 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_063a7ef0;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
          lVar5 = (*(code *)*puVar3)();
          if (lVar5 == 0) break;
          if (*(int *)(lVar5 + 0x18) <= iVar2) {
            FUN_063a8e18();
            pcVar8 = *(code **)(*unaff_x19 + 0x588);
            goto LAB_063a7fbc;
          }
          lVar5 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_063a7f5c;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
          lVar5 = (*(code *)*puVar3)();
          if (lVar5 == 0) break;
          FUN_049cec24(lVar5,iVar2,*(undefined8 *)puVar1);
          FUN_063a6bb4();
          iVar2 = iVar2 + 1;
        } while( true );
      }
    }
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


