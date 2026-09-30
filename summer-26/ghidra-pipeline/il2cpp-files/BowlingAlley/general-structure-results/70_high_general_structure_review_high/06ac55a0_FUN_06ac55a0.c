/*
FUNCTION_NAME: FUN_06ac55a0
ENTRY_POINT: 06ac55a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_14
*/


void FUN_06ac55a0(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_076e318f & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07281318);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__);
    thunk_FUN_032e1da0(PTR_DAT_0727b8b8);
    thunk_FUN_032e1da0(PTR_DAT_0727b8c0);
    thunk_FUN_032e1da0(PTR_DAT_0727b8c8);
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_0727b8d0);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequest>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequestOptions>__ctor__);
    DAT_076e318f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  plVar10 = (long *)param_1[0x15];
  if (plVar10 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar10 + 0x198))(plVar10,param_2,*(undefined8 *)(*plVar10 + 0x1a0));
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar14 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0727a8d8) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto LAB_06ac5714;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_032937ac(param_2,*(long *)PTR_DAT_0727a8d8,5);
LAB_06ac5714:
      lVar14 = (*(code *)*puVar12)(param_2,puVar12[1]);
      if (lVar14 != 0) {
        FUN_041e3694(&local_b8,lVar14,*(undefined8 *)PTR_DAT_0727b8d0);
        puVar9 = Method_UnityEngine_Events_UnityEvent<WitRequestOptions>__ctor__;
        puVar8 = Method_UnityEngine_Events_UnityEvent<WitRequest>_Invoke__;
        puVar7 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__;
        puVar6 = Method_UnityEngine_Events_UnityEvent<VoiceSession>__ctor__;
        puVar5 = PTR_DAT_07281318;
        puVar4 = PTR_DAT_0727b8c0;
        puVar3 = PTR_DAT_072798f8;
        puVar2 = PTR_DAT_072794f0;
        uStack_78 = uStack_b0;
        local_80 = local_b8;
        local_70 = local_a8;
        while (uVar11 = FUN_052d44b4(&local_80,*(undefined8 *)puVar4), uVar13 = local_70,
              (uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar11 = FUN_06bece64(uVar13,0,0);
          if ((uVar11 & 1) == 0) {
            if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar11 = FUN_050fa644(param_1[0x11],uVar13,&local_88,*(undefined8 *)puVar7);
            if ((uVar11 & 1) == 0) {
              if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_050f8b10(param_1[0x11],uVar13,param_2,*(undefined8 *)puVar6);
            }
            else {
              lVar14 = *(long *)puVar5;
              bVar1 = *(byte *)(lVar14 + 0x130);
              if ((((*(byte *)(*param_2 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar1 - 1) * 8) != lVar14)) ||
                  (local_88 == (long *)0x0)) ||
                 ((*(byte *)(*local_88 + 0x130) < bVar1 ||
                  (*(long *)(*(long *)(*local_88 + 200) + ((ulong)bVar1 - 1) * 8) != lVar14)))) {
                uVar13 = FUN_057ab660(*(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__,
                                      uVar13,local_88,param_2,0);
                uVar13 = FUN_057aaeec(*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar8,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                lVar14 = *(long *)puVar2;
                bVar1 = *(byte *)(lVar14 + 0x130);
                if (*(byte *)(*param_2 + 0x130) < bVar1) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = param_2;
                  if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
                    plVar10 = (long *)0x0;
                  }
                }
                FUN_06bb3070(uVar13,plVar10,0);
              }
            }
          }
        }
        FUN_052d44b0(&local_80,*(undefined8 *)PTR_DAT_0727b8b8);
        if (param_1[0x2b] != 0) {
          local_a0 = FUN_03fdb010(param_1[0x2b],&local_90,
                                  *(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__);
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(long *)(local_90 + 0x10) = (long)param_1;
          thunk_FUN_0333a630((long *)(local_90 + 0x10),param_1);
          if (local_90 != 0) {
            *(long *)(local_90 + 0x18) = (long)param_2;
            thunk_FUN_0333a630((long *)(local_90 + 0x18),param_2);
            (**(code **)(*param_1 + 0x2e8))(param_1,local_90,*(undefined8 *)(*param_1 + 0x2f0));
            FUN_0479c18c(local_a0,*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<VoiceSession>_RemoveListener__
                        );
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


