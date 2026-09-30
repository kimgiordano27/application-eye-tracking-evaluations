/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 0337bdec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0337c55c) */
/* WARNING: Removing unreachable block (ram,0x0337c32c) */
/* WARNING: Removing unreachable block (ram,0x0337c570) */
/* WARNING: Removing unreachable block (ram,0x0337c130) */

void OVRPlugin__SetInsightPassthroughStyle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long *unaff_x19;
  int iVar14;
  long *unaff_x23;
  
  FUN_02cf133c();
  uVar1 = *(uint *)(unaff_x19 + 3);
  iVar14 = *(int *)((long)unaff_x19 + 0x1c);
  lVar10 = unaff_x19[2];
  *(int *)((long)unaff_x19 + 0x1c) = iVar14 + 1;
  if (lVar10 != 0) {
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      uVar13 = uVar1 + 1;
      *(uint *)(unaff_x19 + 3) = uVar13;
      *(undefined2 *)(lVar10 + (long)(int)uVar1 * 2 + 0x20) = 0xc;
      *(int *)((long)unaff_x19 + 0x1c) = iVar14 + 2;
    }
    else {
      FUN_02cf133c();
      uVar13 = *(uint *)(unaff_x19 + 3);
      lVar10 = unaff_x19[2];
      *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0337c554;
    }
    if (uVar13 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x19 + 3) = uVar13 + 1;
      *(undefined2 *)(lVar10 + (long)(int)uVar13 * 2 + 0x20) = 8;
    }
    else {
      FUN_02cf133c();
    }
    puVar5 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Current__
    ;
    puVar4 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_MoveNext__
    ;
    puVar3 = PTR_DAT_0422fce8;
    puVar2 = PTR_DAT_0422fa70;
    iVar14 = 0;
    do {
      lVar10 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0337bf1c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498();
LAB_0337bf1c:
      (*(code *)*puVar7)();
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x20);
    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,1);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0337c558;
      *(undefined2 *)(lVar10 + 0x20) = 0x27;
      plVar8 = (long *)FUN_02357998();
      if (plVar8 != (long *)0x0) {
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0337bfbc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar5,0);
LAB_0337bfbc:
        plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        puVar6 = 
        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_Dispose__
        ;
        puVar4 = PTR_DAT_04230960;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0337c030;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0);
LAB_0337c030:
          uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar11 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_0337c124;
            lVar10 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 == 0) goto LAB_0337c0fc;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_0337c0e4;
          }
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0337c08c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar6,0);
LAB_0337c08c:
          uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          lVar10 = **(long **)(*unaff_x23 + 0xb8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(uint *)(lVar10 + 0x18) <= ((uint)uVar11 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          *(undefined1 *)(lVar10 + (uVar11 & 0xffff) + 0x20) = 1;
        } while( true );
      }
    }
  }
  goto LAB_0337c554;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0337c0e4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0337c118;
    }
  }
LAB_0337c0fc:
  puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar3,0);
LAB_0337c118:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0337c124:
  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,1);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_0337c558:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined2 *)(lVar10 + 0x20) = 0x22;
    plVar8 = (long *)FUN_02357998();
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0337c1b8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar5,0);
LAB_0337c1b8:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar6 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_Dispose__
      ;
      puVar4 = PTR_DAT_04230960;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0337c22c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0);
LAB_0337c22c:
        uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0337c320;
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0337c2f8;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0337c2e0;
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0337c288;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar6,0);
LAB_0337c288:
        uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(uint *)(lVar10 + 0x18) <= ((uint)uVar11 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(undefined1 *)(lVar10 + (uVar11 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_0337c554;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0337c4dc:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0337c510;
    }
  }
LAB_0337c4f4:
  puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar3,0);
LAB_0337c510:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0337c2e0:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0337c314;
    }
  }
LAB_0337c2f8:
  puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar3,0);
LAB_0337c314:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0337c320:
  uVar9 = FUN_01c5d2fc(*(undefined8 *)puVar2,5);
  FUN_032032f0(uVar9,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_MoveNext__
               ,0);
  plVar8 = (long *)FUN_02357998();
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0337c3b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar5,0);
LAB_0337c3b8:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar4 = 
    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRGrabbable,_int>_Dispose__
    ;
    puVar2 = PTR_DAT_04230960;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0337c42c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar2,0);
LAB_0337c42c:
      uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_0337c4f4;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0337c4dc;
      }
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0337c488;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0);
LAB_0337c488:
      uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(lVar10 + 0x18) <= ((uint)uVar11 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined1 *)(lVar10 + (uVar11 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_0337c554:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


