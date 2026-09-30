/*
FUNCTION_NAME: FUN_0397d208
ENTRY_POINT: 0397d208
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0397d208(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_049201e2 & 1) == 0) {
    FUN_020612a4(StringLiteral_9132);
    DAT_049201e2 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 != 0) {
    if (param_2 < *(uint *)(lVar8 + 0x18)) {
      lVar7 = (long)(int)param_2;
      lVar5 = lVar8 + lVar7 * 8;
      plVar9 = (long *)(lVar5 + 0x20);
      if (*plVar9 == 0) {
        lVar4 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_9132,2);
        if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_0397d3f4;
        *plVar9 = lVar4;
        thunk_FUN_020ccb58(lVar5 + 0x20,lVar4);
      }
      lVar8 = *(long *)(param_1 + 0x68);
      if (lVar8 == 0)
      goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
      if (param_2 < *(uint *)(lVar8 + 0x18)) {
        lVar5 = *(long *)(param_1 + 0x60);
        if (lVar5 == 0)
        goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          lVar4 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
          if (lVar4 == 0)
          goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
          iVar1 = *(int *)(lVar8 + lVar7 * 4 + 0x20);
          uVar3 = iVar1 * 2;
          if (*(int *)(lVar4 + 0x18) < (int)(uVar3 + 2)) {
            lVar8 = RootMotion_Dynamics_Muscle__get_colliders
                              (*(undefined8 *)StringLiteral_9132,iVar1 << 3);
            if (0 < (int)uVar3) {
              uVar2 = *(uint *)(lVar4 + 0x18);
              uVar6 = 0;
              do {
                if (uVar2 == uVar6) goto LAB_0397d3f4;
                if (lVar8 == 0)
                goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke
                ;
                if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0397d3f4;
                *(undefined4 *)(lVar8 + 0x20 + uVar6 * 4) =
                     *(undefined4 *)(lVar4 + 0x20 + uVar6 * 4);
                uVar6 = uVar6 + 1;
              } while (uVar3 != uVar6);
            }
            lVar5 = *(long *)(param_1 + 0x60);
            if (lVar5 == 0)
            goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
            if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_0397d3f4;
            *(long *)(lVar5 + lVar7 * 8 + 0x20) = lVar8;
            thunk_FUN_020ccb58();
            lVar5 = *(long *)(param_1 + 0x60);
            if (lVar5 == 0)
            goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
          }
          if (param_2 < *(uint *)(lVar5 + 0x18)) {
            lVar8 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
            if (lVar8 == 0)
            goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < uVar2) {
              *(undefined4 *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = param_3;
              if ((uint)((long)(int)uVar3 | 1U) < uVar2) {
                lVar5 = *(long *)(param_1 + 0x68);
                *(undefined4 *)(lVar8 + ((long)(int)uVar3 | 1U) * 4 + 0x20) = param_4;
                if (lVar5 == 0)
                goto Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke
                ;
                if (param_2 < *(uint *)(lVar5 + 0x18)) {
                  *(int *)(lVar5 + lVar7 * 4 + 0x20) = iVar1 + 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_0397d3f4:
                    /* WARNING: Subroutine does not return */
    FUN_02061554();
  }
Unity_Collections_RewindableAllocator_Try_000009DE_PostfixBurstDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


