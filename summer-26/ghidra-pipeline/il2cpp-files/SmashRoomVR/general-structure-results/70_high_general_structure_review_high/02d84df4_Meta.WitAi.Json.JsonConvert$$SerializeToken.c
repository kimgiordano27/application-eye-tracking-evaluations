/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 02d84df4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeToken(void)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  uint in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  size_t __n;
  undefined8 *puVar8;
  long *unaff_x20;
  uint unaff_w21;
  size_t unaff_x22;
  void *__dest;
  undefined8 *puVar9;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  while (unaff_w26 < in_w8) {
    memcpy((void *)((long)unaff_x20 + *(uint *)(*unaff_x20 + 0x104) * unaff_x19 + 0x20),unaff_x28,
           unaff_x22);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    if (*(uint *)(unaff_x20 + 3) <= unaff_w26) break;
    FUN_01b47ef0(lVar3,(long)unaff_x20 + *(uint *)(*unaff_x20 + 0x104) * unaff_x19 + 0x20,unaff_x28)
    ;
    unaff_w26 = unaff_w26 + *(int *)(unaff_x29 + -0x24);
    unaff_w21 = unaff_w21 + *(int *)(unaff_x29 + -0x24);
    if (((int)unaff_w26 < 0) || (*(int *)(unaff_x25 + 0x24) <= (int)unaff_w26)) {
LAB_02d84e6c:
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar4 = *(long **)(unaff_x25 + 0x18);
    if (plVar4 == (long *)0x0) {
LAB_02d84ea4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(plVar4 + 3) <= unaff_w26) break;
    unaff_x19 = (ulong)unaff_w26;
    memcpy(unaff_x27,(void *)((long)plVar4 + *(uint *)(*plVar4 + 0x104) * unaff_x19 + 0x20),
           unaff_x22);
    __dest = *(void **)(unaff_x29 + -0x50);
    memcpy(__dest,unaff_x27,unaff_x22);
    plVar4 = *(long **)(unaff_x25 + 0x10);
    memcpy(unaff_x28,*(void **)(unaff_x29 + -0x30),unaff_x22);
    pvVar2 = (void *)thunk_FUN_01ac78a4(unaff_x28,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) +
                                                                     0xc0) + 0x28) + 0x80) + 0x20);
    __n = *(size_t *)(unaff_x29 + -0x58);
    memcpy(*(void **)(unaff_x29 + -0x40),pvVar2,__n);
    pvVar2 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar2,__dest,unaff_x22);
    pvVar2 = (void *)thunk_FUN_01ac78a4(pvVar2,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x24 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x28) + 0x80) + 0x20);
    memcpy(*(void **)(unaff_x29 + -0x48),pvVar2,__n);
    if (plVar4 == (long *)0x0) goto LAB_02d84ea4;
    lVar5 = *(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar5 + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74(lVar3);
      lVar5 = *(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0);
    }
    puVar9 = *(undefined8 **)(unaff_x29 + -0x48);
    puVar8 = *(undefined8 **)(unaff_x29 + -0x40);
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
      puVar9 = (undefined8 *)*puVar9;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02d84cf4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_01ae9f78(plVar4,lVar3,0);
LAB_02d84cf4:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    lVar3 = *(long *)(lVar3 + 8);
    iVar1 = *(int *)(unaff_x29 + -0x24);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    unaff_x25 = *(long *)(unaff_x29 + -0x70);
    unaff_x27 = *(void **)(unaff_x29 + -0x68);
    if ((iVar1 != -1 || *(int *)(unaff_x29 + -0xc) < 1) &&
       (iVar1 != 1 || -1 < *(int *)(unaff_x29 + -0xc))) goto LAB_02d84e6c;
    plVar4 = *(long **)(unaff_x25 + 0x18);
    memcpy(unaff_x27,*(void **)(unaff_x29 + -0x50),unaff_x22);
    if (plVar4 == (long *)0x0) goto LAB_02d84ea4;
    if (*(uint *)(plVar4 + 3) <= unaff_w21) break;
    memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)unaff_w21 + 0x20),
           unaff_x27,unaff_x22);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    if (*(uint *)(plVar4 + 3) <= unaff_w21) break;
    FUN_01b47ef0(lVar3,(long)plVar4 +
                       (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)unaff_w21 + 0x20,unaff_x27);
    unaff_x20 = *(long **)(unaff_x25 + 0x18);
    memcpy(unaff_x28,*(void **)(unaff_x29 + -0x30),unaff_x22);
    if (unaff_x20 == (long *)0x0) goto LAB_02d84ea4;
    unaff_x24 = *(long *)(unaff_x29 + -0x38);
    in_w8 = *(uint *)(unaff_x20 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


