/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateParseHandling
ENTRY_POINT: 04f9ebac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_DateParseHandling(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x6a8));
  FUN_02d6084c(PTR_DAT_067786b0);
  FUN_02d6084c(PTR_DAT_067786b8);
  FUN_02d6084c(PTR_DAT_067786c0);
  FUN_02d6084c(PTR_DAT_067786c8);
  FUN_02d6084c(PTR_DAT_067786d0);
  FUN_02d6084c(PTR_DAT_067786d8);
  FUN_02d6084c(PTR_DAT_067786e0);
  FUN_02d6084c(PTR_DAT_067786e8);
  FUN_02d6084c(PTR_DAT_067786f0);
  FUN_02d6084c(PTR_DAT_067786f8);
  FUN_02d6084c(PTR_DAT_06778700);
  FUN_02d6084c(PTR_DAT_06778708);
  FUN_02d6084c(PTR_DAT_06778710);
  FUN_02d6084c(PTR_DAT_06778718);
  FUN_02d6084c(PTR_DAT_06778720);
  FUN_02d6084c(PTR_DAT_06778728);
  FUN_02d6084c(PTR_DAT_06777440);
  FUN_02d6084c(PTR_DAT_06778730);
  FUN_02d6084c(PTR_DAT_06778738);
  FUN_02d6084c(PTR_DAT_06778740);
  FUN_02d6084c(PTR_DAT_06778748);
  FUN_02d6084c(PTR_DAT_06778750);
  FUN_02d6084c(PTR_DAT_06778758);
  FUN_02d6084c(PTR_DAT_06778760);
  FUN_02d6084c(PTR_DAT_06778768);
  FUN_02d6084c(PTR_DAT_06778770);
  FUN_02d6084c(PTR_DAT_06778778);
  FUN_02d6084c(PTR_DAT_06778780);
  FUN_02d6084c(PTR_DAT_06778788);
  *(undefined1 *)(unaff_x20 + 0xdef) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = FUN_04e91bbc();
  uVar1 = FUN_04fe4fa8(uVar2,0);
  if (uVar1 < 0x502987b2) {
    if (0x434549b7 < uVar1) {
      if (0x48521d89 < uVar1) {
        if (uVar1 < 0x4c20870a) {
          if (uVar1 < 0x4963683e) {
            if (uVar1 < 0x4924ff7f) {
              if (uVar1 == 0x48545c20) {
                uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778668,0);
                if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
                uVar2 = 0x419;
              }
              else {
                if ((uVar1 != 0x4924ff7e) ||
                   (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786d0,0),
                   (uVar3 & 1) == 0)) goto LAB_04fa0d28;
                uVar2 = 0x436;
              }
            }
            else if (uVar1 == 0x49521f1c) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785f8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x41d;
            }
            else {
              if ((uVar1 != 0x4963683d) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778438,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x434;
            }
            goto FUN_04fa0cf4;
          }
          if (0x4a5220af < uVar1) {
            if (uVar1 == 0x4a545f46) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784a8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x487;
            }
            else if (uVar1 == 0x4b1cb3df) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783d8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x465;
            }
            else {
              if ((uVar1 != 0x4c208709) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778590,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x447;
            }
            goto FUN_04fa0cf4;
          }
          puVar5 = (undefined8 *)PTR_DAT_06778618;
          if (uVar1 != 0x49c9fb2c) {
            if ((uVar1 != 0x4a5220af) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778578,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x441;
            goto FUN_04fa0cf4;
          }
        }
        else {
          if (0x4d455975 < uVar1) {
            if (0x4e388f15 < uVar1) {
              if (uVar1 == 0x4f2bc4b5) {
                uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778450,0);
                if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
                uVar2 = 0x47e;
              }
              else if (uVar1 == 0x4f3acf3f) {
                uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785c0,0);
                if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
                uVar2 = 0x41a;
              }
              else {
                if ((uVar1 != 0x502987b1) ||
                   (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778418,0),
                   (uVar3 & 1) == 0)) goto LAB_04fa0d28;
                uVar2 = 0x452;
              }
              goto FUN_04fa0cf4;
            }
            puVar5 = (undefined8 *)PTR_DAT_067783e8;
            if (uVar1 != 0x4e2bc322) {
              if ((uVar1 != 0x4e388f15) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778678,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x40f;
              goto FUN_04fa0cf4;
            }
LAB_04fa067c:
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x141a;
            goto FUN_04fa0cf4;
          }
          if (uVar1 < 0x4c3aca87) {
            if (uVar1 == 0x4c22c5a0) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778720,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x462;
            }
            else {
              if ((uVar1 != 0x4c3aca86) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778400,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x40e;
            }
            goto FUN_04fa0cf4;
          }
          puVar5 = (undefined8 *)PTR_DAT_06778718;
          if (uVar1 != 0x4d431ade) {
            if ((uVar1 != 0x4d455975) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778638,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x444;
            goto FUN_04fa0cf4;
          }
        }
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x443;
        goto FUN_04fa0cf4;
      }
      if (0x462977f3 < uVar1) {
        if (uVar1 < 0x47455004) {
          if (uVar1 < 0x4731c84c) {
            if (uVar1 == 0x471a6efc) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786b0,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x425;
            }
            else {
              if ((uVar1 != 0x4731c84b) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783c0,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x46e;
            }
          }
          else if (uVar1 == 0x47388410) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783e0,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x410;
          }
          else {
            if ((uVar1 != 0x47455003) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067769c8,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x41f;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 < 0x4833569a) {
          if (uVar1 == 0x481a708f) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06776230,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x42d;
          }
          else {
            if ((uVar1 != 0x48335699) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784d0,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x45d;
          }
          goto FUN_04fa0cf4;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778778;
        if (uVar1 != 0x483885a3) {
          if (uVar1 == 0x483d02d1) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784a0,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x437;
          }
          else {
            if ((uVar1 != 0x48521d89) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06776220,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x41c;
          }
          goto FUN_04fa0cf4;
        }
LAB_04fa0b68:
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x85d;
        goto FUN_04fa0cf4;
      }
      if (uVar1 < 0x45430e47) {
        if (uVar1 < 0x44387f58) {
          if (uVar1 == 0x435215aa) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778680,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x424;
          }
          else {
            if ((uVar1 != 0x44387f57) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778478,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x478;
          }
        }
        else if (uVar1 == 0x443cfc85) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778508,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x453;
        }
        else {
          if ((uVar1 != 0x45430e46) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786c0,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x420;
        }
        goto FUN_04fa0cf4;
      }
      if (uVar1 < 0x455218d1) {
        if (uVar1 == 0x454e4739) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786b8,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x415;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778558;
        if (uVar1 != 0x455218d0) goto LAB_04fa0d28;
LAB_04fa0118:
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x241a;
        goto FUN_04fa0cf4;
      }
      puVar5 = (undefined8 *)PTR_DAT_06777440;
      if (uVar1 != 0x4567df1f) {
        if (uVar1 == 0x461a6d69) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778530,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0xc0a;
        }
        else {
          if ((uVar1 != 0x462977f3) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785e0,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x405;
        }
        goto FUN_04fa0cf4;
      }
LAB_04fa0bbc:
      uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
      uVar2 = 0x804;
      goto FUN_04fa0cf4;
    }
    if (0x3d1e7e08 < uVar1) {
      if (uVar1 < 0x411a658b) {
        if (uVar1 < 0x3f1a6265) {
          if (uVar1 < 0x3e4541d9) {
            if (uVar1 == 0x3e3cf313) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786e0,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x43f;
            }
            else {
              if ((uVar1 != 0x3e4541d8) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784e8,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x442;
            }
          }
          else if (uVar1 == 0x3e520dcb) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778560,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x41b;
          }
          else {
            if ((uVar1 != 0x3f1a6264) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778470,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x408;
          }
        }
        else if (uVar1 < 0x4024f154) {
          if (uVar1 == 0x40207425) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778640,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x83c;
          }
          else {
            if ((uVar1 != 0x4024f153) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785f0,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x45e;
          }
        }
        else if (uVar1 == 0x405210f1) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778758,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x45b;
        }
        else if (uVar1 == 0x40d59ee7) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786a0,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x82c;
        }
        else {
          if ((uVar1 != 0x411a658a) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778690,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x409;
        }
      }
      else {
        if (0x4231c06c < uVar1) {
          if (uVar1 < 0x432078df) {
            if (uVar1 == 0x423cf95f) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06770a68,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x412;
            }
            else {
              if ((uVar1 != 0x432078de) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778428,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x456;
            }
          }
          else if (uVar1 == 0x432bb1d1) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778540,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x445;
          }
          else if (uVar1 == 0x433cfaf2) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778520,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x46f;
          }
          else {
            if ((uVar1 != 0x434549b7) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778388,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x432;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 < 0x41454692) {
          if (uVar1 == 0x413cf7cc) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778740,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 1099;
          }
          else {
            if ((uVar1 != 0x41454691) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778420,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x41e;
          }
        }
        else if (uVar1 == 0x422bb03e) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783b8,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x451;
        }
        else {
          if ((uVar1 != 0x4231c06c) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778378,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x454;
        }
      }
      goto FUN_04fa0cf4;
    }
    if (0x3a2ba3a6 < uVar1) {
      if (uVar1 < 0x3b68333b) {
        if (0x3a453b8c < uVar1) {
          if (uVar1 == 0x3b206c46) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778568,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x491;
          }
          else {
            if ((uVar1 != 0x3b68333a) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778570,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x850;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 == 0x3a386f99) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785c8,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x470;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        puVar5 = (undefined8 *)PTR_DAT_067785a8;
        if (uVar1 != 0x3a453b8c) goto LAB_04fa0d28;
LAB_04fa06d0:
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x428;
        goto FUN_04fa0cf4;
      }
      if (uVar1 < 0x3c453eb3) {
        if (uVar1 == 0x3c2ba6cc) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778440,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x46d;
        }
        else {
          if ((uVar1 != 0x3c453eb2) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778518,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x44a;
        }
        goto FUN_04fa0cf4;
      }
      if (uVar1 == 0x3c49bbe0) {
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778580,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x42a;
          goto FUN_04fa0cf4;
        }
        goto LAB_04fa0d28;
      }
      if (uVar1 == 0x3c520aa5) {
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778608,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x43b;
          goto FUN_04fa0cf4;
        }
        goto LAB_04fa0d28;
      }
      puVar5 = (undefined8 *)PTR_DAT_06778398;
      if (uVar1 != 0x3d1e7e08) goto LAB_04fa0d28;
LAB_04fa001c:
      uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
      uVar2 = 0x85f;
      goto FUN_04fa0cf4;
    }
    if (0x37386ae0 < uVar1) {
      if (uVar1 < 0x38453867) {
        if (uVar1 == 0x382ba080) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778628,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x423;
        }
        else {
          if ((uVar1 != 0x38453866) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785d0,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x449;
        }
      }
      else if (uVar1 == 0x38520459) {
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778468,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x44f;
      }
      else {
        if ((uVar1 != 0x3a2ba3a6) ||
           (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785b8,0), (uVar3 & 1) == 0))
        goto LAB_04fa0d28;
        uVar2 = 0x402;
      }
      goto FUN_04fa0cf4;
    }
    if (uVar1 < 0x356f22fd) {
      if (uVar1 == 0x106c50ab) {
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778510,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x46c;
      }
      else {
        if ((uVar1 != 0x356f22fc) ||
           (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778448,0), (uVar3 & 1) == 0))
        goto LAB_04fa0d28;
        uVar2 = 0x47a;
      }
      goto FUN_04fa0cf4;
    }
    puVar5 = (undefined8 *)PTR_DAT_06778460;
    if (uVar1 != 0x3729c4a7) {
      if ((uVar1 != 0x37386ae0) ||
         (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06769370,0), (uVar3 & 1) == 0))
      goto LAB_04fa0d28;
      uVar2 = 0x421;
      goto FUN_04fa0cf4;
    }
LAB_04fa0c28:
    uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
LAB_04fa0d28:
      thunk_FUN_02dc61f4(PTR_DAT_06778790);
      uVar2 = FUN_04e83184();
      thunk_FUN_02dc61f4(PTR_DAT_06769758);
      uVar4 = thunk_FUN_02d9d534();
      FUN_050095bc(uVar4,uVar2,0);
      uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06778798);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar2);
    }
    uVar2 = 0x450;
  }
  else {
    if (uVar1 < 0x6222e843) {
      if (0x5c1ccea2 < uVar1) {
        if (uVar1 < 0x5e25208e) {
          if (0x5c7ad43c < uVar1) {
            if (uVar1 < 0x5d31eaee) {
              if (uVar1 == 0x5d251efa) {
                uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778588,0);
                if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
                uVar2 = 0x401;
              }
              else {
                if ((uVar1 != 0x5d31eaed) ||
                   (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067708f0,0),
                   (uVar3 & 1) == 0)) goto LAB_04fa0d28;
                uVar2 = 0x427;
              }
            }
            else if (uVar1 == 0x5d342984) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786d8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x448;
            }
            else if (uVar1 == 0x5d4e6d01) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783d0,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x416;
            }
            else {
              if ((uVar1 != 0x5e25208d) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783a8,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x44d;
            }
            goto FUN_04fa0cf4;
          }
          if (uVar1 < 0x5c2e17c4) {
            if (uVar1 == 0x5c22ded0) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778598,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x40b;
            }
            else {
              if ((uVar1 != 0x5c2e17c3) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778728,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x481;
            }
          }
          else if (uVar1 == 0x5c3ae3b6) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06777438,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x40d;
          }
          else {
            if ((uVar1 != 0x5c7ad43c) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778458,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x48c;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 < 0x5f2e1c7d) {
          if (uVar1 < 0x5e4335a2) {
            if (uVar1 == 0x5e2e1ae9) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785d8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x42f;
            }
            else {
              if ((uVar1 != 0x5e4335a1) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785e8,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x422;
            }
          }
          else if (uVar1 == 0x5e4e6e94) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784e0,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x463;
          }
          else {
            if ((uVar1 != 0x5f2e1c7c) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786f0,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x44c;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 < 0x605481e9) {
          puVar5 = (undefined8 *)PTR_DAT_06778380;
          if (uVar1 != 0x603aea02) {
            if ((uVar1 != 0x605481e8) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06774bb0,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x417;
            goto FUN_04fa0cf4;
          }
LAB_04fa0658:
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x468;
          goto FUN_04fa0cf4;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778730;
        if (uVar1 != 0x612e1fa2) {
          if (uVar1 == 0x61366e67) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778500,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x413;
          }
          else {
            if ((uVar1 != 0x6222e842) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784f0,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x438;
          }
          goto FUN_04fa0cf4;
        }
        goto LAB_04fa0c28;
      }
      if (0x572e0fe4 < uVar1) {
        if (0x5836603c < uVar1) {
          if (uVar1 < 0x5867fd09) {
            if (uVar1 == 0x583add6a) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067785b0,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x42b;
            }
            else {
              if ((uVar1 != 0x5867fd08) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778410,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x435;
            }
          }
          else if (uVar1 == 0x5a432f55) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778390,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x480;
          }
          else if (uVar1 == 0x5b31e7c7) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778770,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x426;
          }
          else {
            if ((uVar1 != 0x5c1ccea2) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786c8,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x407;
          }
          goto FUN_04fa0cf4;
        }
        if (0x581cc856 < uVar1) {
          if (uVar1 == 0x58299449) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778650,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x403;
          }
          else {
            if ((uVar1 != 0x5836603c) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778688,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x461;
          }
          goto FUN_04fa0cf4;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778408;
        if (uVar1 != 0x57365ea9) {
          if ((uVar1 != 0x581cc856) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778550,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x406;
          goto FUN_04fa0cf4;
        }
LAB_04fa03b8:
        uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
        uVar2 = 0x414;
        goto FUN_04fa0cf4;
      }
      if (0x55251262 < uVar1) {
        if (uVar1 < 0x5539c889) {
          if (uVar1 == 0x552e0cbe) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778750,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x44e;
          }
          else {
            if ((uVar1 != 0x5539c888) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778430,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x484;
          }
        }
        else if (uVar1 == 0x562e0e51) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778498,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x43e;
        }
        else if (uVar1 == 0x5722d6f1) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783f0,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x40c;
        }
        else {
          if ((uVar1 != 0x572e0fe4) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784c0,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x43a;
        }
        goto FUN_04fa0cf4;
      }
      if (uVar1 < 0x504e588b) {
        if (uVar1 == 0x503d0f69) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067761b8,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x440;
        }
        else {
          if ((uVar1 != 0x504e588a) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778528,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x446;
        }
        goto FUN_04fa0cf4;
      }
      puVar5 = (undefined8 *)PTR_DAT_06778488;
      if (uVar1 == 0x54ecc315) goto LAB_04fa06d0;
      puVar5 = (undefined8 *)PTR_DAT_067769d0;
      if (uVar1 != 0x55251262) goto LAB_04fa0d28;
    }
    else {
      if (uVar1 < 0xb38f1d87) {
        if (uVar1 < 0x683af69b) {
          if (0x6254850e < uVar1) {
            if (uVar1 < 0x6336718e) {
              if (uVar1 == 0x625fbe01) {
                uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783b0,0);
                if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
                uVar2 = 0x46a;
              }
              else {
                if ((uVar1 != 0x6336718d) ||
                   (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778708,0),
                   (uVar3 & 1) == 0)) goto LAB_04fa0d28;
                uVar2 = 0x814;
              }
              goto FUN_04fa0cf4;
            }
            if (uVar1 == 0x6422eb68) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786a8,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x429;
              goto FUN_04fa0cf4;
            }
            puVar5 = (undefined8 *)PTR_DAT_067784d8;
            if (uVar1 != 0x6429ff0b) {
              if ((uVar1 != 0x683af69a) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778760,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x439;
              goto FUN_04fa0cf4;
            }
            goto LAB_04fa0b68;
          }
          if (0x62366ffa < uVar1) {
            if (uVar1 == 0x6247b91b) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778490,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x488;
            }
            else {
              if ((uVar1 != 0x6254850e) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783a0,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x418;
            }
            goto FUN_04fa0cf4;
          }
          if (uVar1 == 0x6229a407) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067786e8,0);
            if ((uVar3 & 1) != 0) {
              uVar2 = 0x483;
              goto FUN_04fa0cf4;
            }
            goto LAB_04fa0d28;
          }
          puVar5 = (undefined8 *)PTR_DAT_06778548;
          if (uVar1 != 0x62366ffa) goto LAB_04fa0d28;
          goto LAB_04fa03b8;
        }
        if (uVar1 < 0x79fc4cdd) {
          if (0x6c3f7a14 < uVar1) {
            if (uVar1 == 0x6e344447) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778600,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x482;
            }
            else {
              if ((uVar1 != 0x79fc4cdc) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778620,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x457;
            }
            goto FUN_04fa0cf4;
          }
          puVar5 = (undefined8 *)PTR_DAT_06778748;
          if (uVar1 != 0x6ac023e8) {
            if ((uVar1 != 0x6c3f7a14) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06770a60,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x411;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa067c;
        }
        if (uVar1 < 0x8301deec) {
          puVar5 = (undefined8 *)PTR_DAT_06778670;
          if (((uVar1 == 0x81f731c3) ||
              (puVar5 = (undefined8 *)PTR_DAT_067786f8, uVar1 == 0x8301deeb)) &&
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0), (uVar3 & 1) != 0)) {
            uVar2 = 0xc04;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778480;
        if ((uVar1 != 0x86f739a2) && (puVar5 = (undefined8 *)PTR_DAT_06778700, uVar1 != 0x8801e6ca))
        {
          puVar5 = (undefined8 *)PTR_DAT_06778610;
          if (uVar1 != 0xb38f1d86) goto LAB_04fa0d28;
          goto LAB_04fa0118;
        }
        goto LAB_04fa0bbc;
      }
      if (uVar1 < 0xe23c4d72) {
        if (0xc458a0a9 < uVar1) {
          if (uVar1 < 0xda1c9924) {
            if (uVar1 == 0xc6e4a1f4) {
              uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778698,0);
              if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
              uVar2 = 0x464;
            }
            else {
              if ((uVar1 != 0xda1c9923) ||
                 (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784f8,0),
                 (uVar3 & 1) == 0)) goto LAB_04fa0d28;
              uVar2 = 0x485;
            }
          }
          else if (uVar1 == 0xdb3aafca) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778630,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x203b;
          }
          else if (uVar1 == 0xe03ab7a9) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783c8,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x243b;
          }
          else {
            if ((uVar1 != 0xe23c4d71) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778648,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x281a;
          }
          goto FUN_04fa0cf4;
        }
        if (0xc0315742 < uVar1) {
          if (uVar1 == 0xc1235e46) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778780,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x82e;
          }
          else {
            if ((uVar1 != 0xc458a0a9) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067783f8,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x45a;
          }
          goto FUN_04fa0cf4;
        }
        if (uVar1 == 0xbd35cf27) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784b0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x201a;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        puVar5 = (undefined8 *)PTR_DAT_067785a0;
        if (uVar1 != 0xc0315742) goto LAB_04fa0d28;
        goto LAB_04fa001c;
      }
      if (uVar1 < 0xeb9e8568) {
        if (uVar1 < 0xe93ac5d5) {
          if (uVar1 == 0xe43abdf5) {
            uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778710,0);
            if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
            uVar2 = 0x143b;
          }
          else {
            if ((uVar1 != 0xe93ac5d4) ||
               (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778538,0),
               (uVar3 & 1) == 0)) goto LAB_04fa0d28;
            uVar2 = 0x1c3b;
          }
        }
        else if (uVar1 == 0xe98e391b) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778738,0);
          if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
          uVar2 = 0x843;
        }
        else {
          if ((uVar1 != 0xeb9e8567) ||
             (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_067784b8,0), (uVar3 & 1) == 0)
             ) goto LAB_04fa0d28;
          uVar2 = 0x47c;
        }
        goto FUN_04fa0cf4;
      }
      if (0xf0e14d63 < uVar1) {
        if (uVar1 == 0xf491fb4a) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778658,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x42e;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        if (uVar1 == 0xfee1636d) {
          uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778768,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x486;
            goto FUN_04fa0cf4;
          }
          goto LAB_04fa0d28;
        }
        puVar5 = (undefined8 *)PTR_DAT_06778660;
        if (uVar1 != 0xff1fc348) goto LAB_04fa0d28;
        goto LAB_04fa0658;
      }
      puVar5 = (undefined8 *)PTR_DAT_067784c8;
      if (uVar1 != 0xee5e60a8) {
        if ((uVar1 != 0xf0e14d63) ||
           (uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06778788,0), (uVar3 & 1) == 0))
        goto LAB_04fa0d28;
        uVar2 = 0x46b;
        goto FUN_04fa0cf4;
      }
    }
    uVar3 = thunk_FUN_04e8bd3c(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_04fa0d28;
    uVar2 = 0x42c;
  }
FUN_04fa0cf4:
  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
  FUN_04f9d984(uVar4,uVar2,1,0);
  return uVar4;
}


