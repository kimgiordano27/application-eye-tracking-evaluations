/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 04936674
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__get_Item(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  float fVar7;
  float unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  float fVar8;
  float unaff_s12;
  undefined1 auVar9 [16];
  
  FUN_06b3dc78(unaff_s9);
  puVar1 = PTR_DAT_070f24b0;
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 049366ac to 04a3673b has its CatchHandler @ 049366ac
                       catch() { ... } // from try @ 049366ac with catch @ 049366ac
                       catch() { ... } // from try @ 04936784 with catch @ 049366ac
                       catch() { ... } // from try @ 049368e4 with catch @ 049366ac
                       catch() { ... } // from try @ 04936920 with catch @ 049366ac
                       catch() { ... } // from try @ 04936970 with catch @ 049366ac */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070f24b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x55) * 0x10 + 0x138);
          goto FUN_049366e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08();
FUN_049366e0:
    (*(code *)*puVar2)();
    if ((unaff_x20 != 0) && (plVar3 = (long *)FUN_06b18750(), plVar3 != (long *)0x0)) {
      lVar4 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x4e) * 0x10 + 0x138);
            goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
      fVar7 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if (*(long *)(unaff_x19 + 0x500) != 0) {
        fVar8 = *(float *)(unaff_x19 + 0x4b8);
        plVar3 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
        if (plVar3 != (long *)0x0) {
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          fVar7 = (float)(int)(fVar7 * fVar8) - (unaff_s12 + unaff_s10 + unaff_s8);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x4e) * 0x10 + 0x138);
                goto LAB_049367ec;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0x4e);
LAB_049367ec:
          fVar8 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
          if (ABS(fVar8 - fVar7) <= DAT_012e37c4) {
            return;
          }
          if (*(long *)(unaff_x19 + 0x500) != 0) {
            plVar3 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
            fVar8 = 0.0;
            if (0.0 <= fVar7) {
              fVar8 = fVar7;
            }
            auVar9 = FUN_06b3dc78(fVar8,0);
            if (plVar3 != (long *)0x0) {
              lVar4 = *plVar3;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xa5) * 0x10 + 0x138);
                    goto LAB_049368b0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar3,auVar9._0_8_,auVar9._8_8_ & 0xffffffff,puVar2[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


