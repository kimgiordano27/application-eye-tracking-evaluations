/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$.ctor
ENTRY_POINT: 07099cd0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0___ctor(ulong param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar7 = (long *)(unaff_x19 + 0x78);
      if (unaff_x20 == (long *)*plVar7) {
        return;
      }
      lVar3 = FUN_0709a66c();
      if (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= (int)(uint)lVar8) {
            thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
            uVar4 = thunk_FUN_03cf5234();
            uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e79260);
            uVar6 = thunk_FUN_03ce5214(PTR_DAT_08ea2970);
            FUN_070619b8(uVar4,uVar5,uVar6,0);
            goto LAB_07099f80;
          }
          lVar3 = FUN_0709a66c();
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          sVar1 = *(short *)(lVar3 + lVar8 * 2 + 0x20);
          sVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
          if (sVar1 == sVar2) {
            if (*plVar7 != 0) {
              *(undefined8 *)(unaff_x19 + 0x120) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x120,0);
              *(undefined8 *)(unaff_x19 + 0x128) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x128,0);
              *(undefined8 *)(unaff_x19 + 0x130) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x130,0);
              *(undefined8 *)(unaff_x19 + 0x68) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x68),0);
              *(undefined8 *)(unaff_x19 + 0xa0) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xa0),0);
              *(undefined8 *)(unaff_x19 + 0x90) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x90),0);
              *(undefined8 *)(unaff_x19 + 0x98) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x98),0);
              *(undefined8 *)(unaff_x19 + 0xb0) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb0),0);
              *(undefined8 *)(unaff_x19 + 0xa8) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xa8),0);
              *(undefined8 *)(unaff_x19 + 0xb8) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb8),0);
              *(undefined8 *)(unaff_x19 + 0xc0) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xc0),0);
              *(undefined8 *)(unaff_x19 + 200) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 200),0);
              *(undefined4 *)(unaff_x19 + 0x144) = 0xffffffff;
              *(undefined8 *)(unaff_x19 + 0x100) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x100,0);
              *(undefined8 *)(unaff_x19 + 0x108) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x108,0);
              *(undefined8 *)(unaff_x19 + 0xf8) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xf8),0);
              *(undefined8 *)(unaff_x19 + 0x70) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x70),0);
              *(undefined8 *)(unaff_x19 + 0xd0) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xd0),0);
              *(undefined8 *)(unaff_x19 + 0xd8) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xd8),0);
              *(undefined8 *)(unaff_x19 + 0xe0) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xe0),0);
              *(undefined8 *)(unaff_x19 + 0x88) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x88),0);
              *(undefined8 *)(unaff_x19 + 0x50) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x50),0);
              *(undefined8 *)(unaff_x19 + 0x58) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x58),0);
              *(undefined8 *)(unaff_x19 + 0x48) = 0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48),0);
              *(undefined8 *)(unaff_x19 + 0x158) = 0;
              thunk_FUN_03d233cc(unaff_x19 + 0x158,0);
              *(undefined4 *)(unaff_x19 + 0x144) = 0xffffffff;
            }
            *plVar7 = (long)unaff_x20;
            thunk_FUN_03d233cc(plVar7);
            plVar7 = (long *)*plVar7;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
              FUN_07099a6c();
              return;
            }
            break;
          }
          lVar3 = FUN_0709a66c();
          lVar8 = lVar8 + 1;
        } while (lVar3 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e79260);
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e9ea40);
    FUN_070660f4(uVar4,uVar5,uVar6,0);
  }
  else {
    thunk_FUN_03ce5214(PTR_DAT_08e71970);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e9c6e8);
    FUN_07100530(uVar4,uVar5,0);
  }
LAB_07099f80:
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea2978);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,uVar5);
}


