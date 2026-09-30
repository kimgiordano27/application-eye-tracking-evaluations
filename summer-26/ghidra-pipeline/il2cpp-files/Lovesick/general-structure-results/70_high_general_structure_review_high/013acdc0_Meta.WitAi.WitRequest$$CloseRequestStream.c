/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 013acdc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest__CloseRequestStream(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *__dest;
  size_t unaff_x23;
  undefined8 uVar7;
  undefined1 *__s;
  long unaff_x25;
  long unaff_x29;
  
  uVar6 = unaff_x23 + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
  __s = __dest + -uVar6;
  memset(__s,0,unaff_x23);
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    memset(__s,0,unaff_x23);
    memcpy(__dest,__s,unaff_x23);
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    uVar6 = FUN_00da5124(lVar3,__dest);
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if ((uVar6 & 1) == 0) {
      uVar4 = thunk_FUN_00d93c64();
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c(lVar3);
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_01780344(uVar7,0);
      uVar6 = FUN_0178a8c4(uVar4,uVar7,0);
      if ((uVar6 & 1) != 0) {
        FUN_01792bbc(0);
      }
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_00d5941c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x132);
      lVar3 = *(long *)(unaff_x21 + 0x20);
    }
    uVar4 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
    *(long *)(unaff_x29 + -0x58) = unaff_x19 + 0x20;
    (**(code **)(lVar3 + 0x10))(uVar4,lVar3,0,unaff_x29 + -0x58,unaff_x29 + -0x50);
    *unaff_x20 = *(undefined8 *)(unaff_x29 + -0x50);
    *(int *)(unaff_x20 + 1) = (int)*(undefined8 *)(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -0x48)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


