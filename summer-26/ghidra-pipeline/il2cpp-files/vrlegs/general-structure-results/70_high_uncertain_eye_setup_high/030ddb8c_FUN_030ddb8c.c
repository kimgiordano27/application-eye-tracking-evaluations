/*
FUNCTION_NAME: FUN_030ddb8c
ENTRY_POINT: 030ddb8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x030de264) */
/* WARNING: Removing unreachable block (ram,0x030de25c) */
/* WARNING: Removing unreachable block (ram,0x030de254) */

void FUN_030ddb8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  char local_70 [4];
  char local_6c [4];
  long local_68;
  
  if ((DAT_0412b8db & 1) == 0) {
    FUN_01ab69ac(System_Comparison<IXRInteractable>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<IntPtr,_OpusEncoder>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_TypeInfo
                );
    FUN_01ab69ac(System_Collections_Generic_Dictionary<InternedString,_InternedString[]>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<InternedString,_InputControlLayout>_TypeInfo)
    ;
    DAT_0412b8db = 1;
  }
  local_70[0] = '\0';
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  local_6c[0] = '\0';
  FUN_027e0bd8(uVar10,local_6c,0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (local_6c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  local_6c[0] = '\0';
  FUN_027e0bd8(uVar10,local_6c,0);
  puVar2 = System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_TypeInfo;
  plVar11 = (long *)(param_1 + 0x38);
  lVar5 = *plVar11;
  if (lVar5 == 0) {
LAB_030de244:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar15 = 0;
  iVar9 = *(int *)(param_1 + 0x30) + -1;
LAB_030ddc78:
  if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar15) goto LAB_030de0d4;
  if (*(uint *)(lVar5 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar14 = *(long **)(lVar5 + uVar15 * 8 + 0x20);
  if (plVar14 == (long *)0x0) {
LAB_030ddd20:
    if ((long)uVar15 < (long)iVar9) {
      uVar6 = (ulong)iVar9;
      do {
        lVar5 = *plVar11;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar14 = *(long **)(lVar5 + uVar6 * 8 + 0x20);
        if (plVar14 != (long *)0x0) {
          lVar5 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)System_Collections_Generic_Dictionary<IntPtr,_OpusEncoder>_TypeInfo) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_030dddb0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01a472ec(plVar14,*(long *)
                                         System_Collections_Generic_Dictionary<IntPtr,_OpusEncoder>_TypeInfo
                                ,0);
LAB_030dddb0:
          uVar7 = (*(code *)*puVar3)(plVar14,puVar3[1]);
          plVar16 = (long *)*plVar11;
          if ((uVar7 & 1) != 0) goto code_r0x030dddc4;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(plVar16 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar16[uVar6 + 4] = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + uVar6 + 4,0);
        }
        uVar6 = uVar6 - 1;
        if ((long)uVar6 <= (long)uVar15) break;
      } while( true );
    }
    *(int *)(param_1 + 0x30) = (int)uVar15;
LAB_030de0d4:
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    local_70[0] = '\0';
    FUN_027e0bd8(uVar12,local_70,0);
    *(undefined1 *)(param_1 + 0x34) = 0;
    puVar1 = System_Comparison<IXRInteractable>_TypeInfo;
    while( true ) {
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar5 + 0x20) == 0) {
        if (local_70[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
        }
        if (local_6c[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        return;
      }
      plVar14 = (long *)*plVar11;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar13 = *(uint *)(param_1 + 0x30);
      if (uVar13 == *(uint *)(plVar14 + 3)) {
        if ((int)(uVar13 + 0x40000000) < 0) {
          uVar10 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar10,*(undefined8 *)
                               System_Collections_Generic_Dictionary<InternedString,_InputControlLayout>_TypeInfo
                      );
        }
        FUN_01f25968(plVar11,uVar13 << 1,*(undefined8 *)puVar1);
        uVar13 = *(uint *)(param_1 + 0x30);
        plVar14 = *(long **)(param_1 + 0x38);
        lVar5 = *(long *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x30) = uVar13 + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      else {
        *(uint *)(param_1 + 0x30) = uVar13 + 1;
      }
      FUN_030defb4(lVar5,&local_68,*(undefined8 *)puVar2);
      lVar5 = local_68;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((local_68 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(local_68,*(undefined8 *)(*plVar14 + 0x40)), lVar4 == 0)) break;
      if (*(uint *)(plVar14 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar14[(long)(int)uVar13 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar14 + (long)(int)uVar13 + 4,lVar5);
    }
    uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,0);
  }
  lVar5 = *plVar14;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)System_Collections_Generic_Dictionary<IntPtr,_OpusEncoder>_TypeInfo) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_030ddcec;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01a472ec(plVar14,*(long *)
                                 System_Collections_Generic_Dictionary<IntPtr,_OpusEncoder>_TypeInfo
                        ,0);
LAB_030ddcec:
  uVar6 = (*(code *)*puVar3)(plVar14,puVar3[1]);
  if ((uVar6 & 1) == 0) {
    lVar5 = *plVar11;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    puVar3 = (undefined8 *)(lVar5 + uVar15 * 8 + 0x20);
    *puVar3 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
    goto LAB_030ddd20;
  }
  goto LAB_030ddf90;
code_r0x030dddc4:
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = thunk_FUN_01a89d6c(plVar14,*(undefined8 *)(*plVar16 + 0x40));
  if (lVar5 == 0) {
    uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,0);
  }
  if (*(uint *)(plVar16 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar16[uVar15 + 4] = (long)plVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + uVar15 + 4,plVar14);
  lVar5 = *plVar11;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  puVar3 = (undefined8 *)(lVar5 + uVar6 * 8 + 0x20);
  *puVar3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
  iVar9 = (int)uVar6 + -1;
LAB_030ddf90:
  lVar5 = *plVar11;
  uVar15 = uVar15 + 1;
  if (lVar5 == 0) goto LAB_030de244;
  goto LAB_030ddc78;
}


