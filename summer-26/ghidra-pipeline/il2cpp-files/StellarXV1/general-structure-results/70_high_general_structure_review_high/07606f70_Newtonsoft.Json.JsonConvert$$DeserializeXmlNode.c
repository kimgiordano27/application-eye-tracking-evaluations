/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 07606f70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonConvert__DeserializeXmlNode(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ushort uStack000000000000003c;
  
  puVar8 = PTR_DAT_0928de30;
  if ((DAT_09891d87 & 1) == 0) {
    FUN_04077588(PTR_DAT_0928de30);
    DAT_09891d87 = 1;
  }
  uStack000000000000003c = 0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  plVar10 = (long *)FUN_0407df28(param_1 & 1,param_1 >> 1 & 1,param_1 >> 2 & 1);
  if ((param_1 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_076071b8;
LAB_076070b8:
    uVar17 = 0;
  }
  else {
    if (plVar10 == (long *)0x0) {
LAB_076071b8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (plVar10[3] == 0) goto LAB_076070b8;
    if ((int)plVar10[3] == 0) goto LAB_076071bc;
    plVar14 = plVar10 + 4;
    if (*plVar14 != 0) goto LAB_076070b8;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    plVar11 = (long *)FUN_076060c0();
    if (plVar11 == (long *)0x0) goto LAB_076071b8;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
    if (plVar11 != (long *)0x0) {
      bVar7 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar8)) {
LAB_076071c0:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar11);
      }
      lVar12 = thunk_FUN_040b4e00(plVar11,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar12 == 0) {
        uVar15 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar15,0);
      }
      bVar7 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar8))
      goto LAB_076071c0;
    }
    if ((int)plVar10[3] == 0) goto LAB_076071bc;
    *plVar14 = (long)plVar11;
    thunk_FUN_040ec700(plVar14,plVar11);
    uVar17 = 1;
  }
  uVar3 = *(uint *)(plVar10 + 3);
  while( true ) {
    if ((int)uVar3 <= (int)uVar17) {
      return plVar10;
    }
    if (uVar3 <= uVar17) break;
    lVar12 = plVar10[(long)(int)uVar17 + 4];
    if (lVar12 == 0) goto LAB_076071b8;
    puVar13 = *(undefined4 **)(lVar12 + 0x90);
    uVar15 = *(undefined8 *)(lVar12 + 0x48);
    uVar4 = *(undefined4 *)(lVar12 + 0x1c);
    uVar1 = *puVar13;
    uVar2 = puVar13[3];
    uVar5 = puVar13[4];
    uVar9 = FUN_076071f0(lVar12);
    uVar6 = *(undefined4 *)(lVar12 + 0x20);
    uVar16 = *(undefined8 *)(lVar12 + 0x68);
    uStack000000000000003c = (ushort)((uint)uVar5 >> 8) & 0xff;
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_075ca614(&stack0x0000003c,0);
    uVar15 = FUN_075fa804(uVar15,0,uVar4,uVar9,uVar6,uVar16,uVar1,uVar2);
    *(undefined8 *)(lVar12 + 0xc0) = uVar15;
    thunk_FUN_040ec700((undefined8 *)(lVar12 + 0xc0),uVar15);
    uVar3 = *(uint *)(plVar10 + 3);
    uVar17 = uVar17 + 1;
  }
LAB_076071bc:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


