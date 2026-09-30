/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$GetPinnableReference
ENTRY_POINT: 049366b4
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


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__GetPinnableReference
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  float fVar7;
  float unaff_s12;
  undefined1 auVar8 [16];
  
  do {
    in_x9 = in_x9 + -1;
    piVar5 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_031c0d08();
      goto FUN_049366e0;
    }
    plVar2 = (long *)(in_x10 + 2);
    in_x10 = piVar5;
  } while (*plVar2 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 0x55) * 0x10 + 0x138);
FUN_049366e0:
  (*(code *)*puVar1)();
  if ((unaff_x20 != 0) && (plVar2 = (long *)FUN_06b18750(), plVar2 != (long *)0x0)) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x4e) * 0x10 + 0x138);
          goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x24,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
    fVar6 = (float)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (*(long *)(unaff_x19 + 0x500) != 0) {
      fVar7 = *(float *)(unaff_x19 + 0x4b8);
      plVar2 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        fVar6 = (float)(int)(fVar6 * fVar7) - (unaff_s12 + unaff_s10 + unaff_s8);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x4e) * 0x10 + 0x138);
              goto LAB_049367ec;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x24,0x4e);
LAB_049367ec:
        fVar7 = (float)(*(code *)*puVar1)(plVar2,puVar1[1]);
        if (ABS(fVar7 - fVar6) <= DAT_012e37c4) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x500) != 0) {
          plVar2 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
          fVar7 = 0.0;
          if (0.0 <= fVar6) {
            fVar7 = fVar6;
          }
          auVar8 = FUN_06b3dc78(fVar7,0);
          if (plVar2 != (long *)0x0) {
            lVar3 = *plVar2;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x25) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xa5) * 0x10 + 0x138);
                  goto LAB_049368b0;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x25,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar1)(plVar2,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,puVar1[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


