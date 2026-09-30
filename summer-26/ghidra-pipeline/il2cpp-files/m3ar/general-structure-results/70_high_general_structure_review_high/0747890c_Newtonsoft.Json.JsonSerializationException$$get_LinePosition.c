/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializationException$$get_LinePosition
ENTRY_POINT: 0747890c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializationException__get_LinePosition(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xf8));
  FUN_0403162c(PTR_DAT_08fa1100);
  FUN_0403162c(PTR_DAT_08f76670);
  FUN_0403162c(PTR_DAT_08fa1108);
  FUN_0403162c(PTR_DAT_08fa1110);
  FUN_0403162c(PTR_DAT_08fa1118);
  FUN_0403162c(PTR_DAT_08fa1120);
  FUN_0403162c(PTR_DAT_08fa1128);
  FUN_0403162c(PTR_DAT_08f65d38);
  FUN_0403162c(PTR_DAT_08fa1130);
  FUN_0403162c(PTR_DAT_08fa1138);
  FUN_0403162c(PTR_DAT_08fa1140);
  *(undefined1 *)(unaff_x20 + 0xa99) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar2 = FUN_0736dc94();
  uVar1 = FUN_074c1d8c(uVar2,0);
  if (uVar1 < 0x502987b2) {
    if (0x434549b7 < uVar1) {
      if (0x48521d89 < uVar1) {
        if (uVar1 < 0x4c20870a) {
          if (uVar1 < 0x4963683e) {
            if (uVar1 < 0x4924ff7f) {
              if (uVar1 == 0x48545c20) {
                uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cf0,0);
                if ((uVar3 & 1) == 0) goto LAB_0747aa18;
                uVar2 = 0x419;
              }
              else {
                if ((uVar1 != 0x4924ff7e) ||
                   (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d28,0),
                   (uVar3 & 1) == 0)) goto LAB_0747aa18;
                uVar2 = 0x436;
              }
            }
            else if (uVar1 == 0x49521f1c) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cd8,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x41d;
            }
            else {
              if ((uVar1 != 0x4963683d) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ed0,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x434;
            }
            goto FUN_0747a9e4;
          }
          if (0x4a5220af < uVar1) {
            if (uVar1 == 0x4a545f46) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f30,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x487;
            }
            else if (uVar1 == 0x4b1cb3df) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ea0,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x465;
            }
            else {
              if ((uVar1 != 0x4c208709) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fd8,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x447;
            }
            goto FUN_0747a9e4;
          }
          puVar5 = (undefined8 *)PTR_DAT_08fa1038;
          if (uVar1 != 0x49c9fb2c) {
            if ((uVar1 != 0x4a5220af) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fd0,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x441;
            goto FUN_0747a9e4;
          }
        }
        else {
          if (0x4d455975 < uVar1) {
            if (0x4e388f15 < uVar1) {
              if (uVar1 == 0x4f2bc4b5) {
                uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f9e480,0);
                if ((uVar3 & 1) == 0) goto LAB_0747aa18;
                uVar2 = 0x47e;
              }
              else if (uVar1 == 0x4f3acf3f) {
                uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ff8,0);
                if ((uVar3 & 1) == 0) goto LAB_0747aa18;
                uVar2 = 0x41a;
              }
              else {
                if ((uVar1 != 0x502987b1) ||
                   (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f849e8,0),
                   (uVar3 & 1) == 0)) goto LAB_0747aa18;
                uVar2 = 0x452;
              }
              goto FUN_0747a9e4;
            }
            puVar5 = (undefined8 *)PTR_DAT_08fa0ea8;
            if (uVar1 != 0x4e2bc322) {
              if ((uVar1 != 0x4e388f15) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cf8,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x40f;
              goto FUN_0747a9e4;
            }
LAB_0747a354:
            uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x141a;
            goto FUN_0747a9e4;
          }
          if (uVar1 < 0x4c3aca87) {
            if (uVar1 == 0x4c22c5a0) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10e8,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x462;
            }
            else {
              if ((uVar1 != 0x4c3aca86) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c30,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x40e;
            }
            goto FUN_0747a9e4;
          }
          puVar5 = (undefined8 *)PTR_DAT_08fa10e0;
          if (uVar1 != 0x4d431ade) {
            if ((uVar1 != 0x4d455975) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1050,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x444;
            goto FUN_0747a9e4;
          }
        }
        uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x443;
        goto FUN_0747a9e4;
      }
      if (0x462977f3 < uVar1) {
        if (uVar1 < 0x47455004) {
          if (uVar1 < 0x4731c84c) {
            if (uVar1 == 0x471a6efc) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d10,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x425;
            }
            else {
              if ((uVar1 != 0x4731c84b) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e90,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x46e;
            }
          }
          else if (uVar1 == 0x47388410) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c20,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x410;
          }
          else {
            if ((uVar1 != 0x47455003) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c58,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x41f;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 < 0x4833569a) {
          if (uVar1 == 0x481a708f) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c68,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x42d;
          }
          else {
            if ((uVar1 != 0x48335699) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f58,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x45d;
          }
          goto FUN_0747a9e4;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa1130;
        if (uVar1 != 0x483885a3) {
          if (uVar1 == 0x483d02d1) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f28,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x437;
          }
          else {
            if ((uVar1 != 0x48521d89) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f9ee78,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x41c;
          }
          goto FUN_0747a9e4;
        }
LAB_0747a920:
        uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x85d;
        goto FUN_0747a9e4;
      }
      if (uVar1 < 0x45430e47) {
        if (uVar1 < 0x44387f58) {
          if (uVar1 == 0x435215aa) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d00,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x424;
          }
          else {
            if ((uVar1 != 0x44387f57) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f00,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x478;
          }
        }
        else if (uVar1 == 0x443cfc85) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f80,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x453;
        }
        else {
          if ((uVar1 != 0x45430e46) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10a0,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x420;
        }
        goto FUN_0747a9e4;
      }
      if (uVar1 < 0x455218d1) {
        if (uVar1 == 0x454e4739) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d18,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x415;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa0fb8;
        if (uVar1 != 0x455218d0) goto LAB_0747aa18;
LAB_07479dd8:
        uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x241a;
        goto FUN_0747a9e4;
      }
      puVar5 = (undefined8 *)PTR_DAT_08f65d30;
      if (uVar1 != 0x4567df1f) {
        if (uVar1 == 0x461a6d69) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c80,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0xc0a;
        }
        else {
          if ((uVar1 != 0x462977f3) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cc8,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x405;
        }
        goto FUN_0747a9e4;
      }
LAB_0747a944:
      uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_0747aa18;
      uVar2 = 0x804;
      goto FUN_0747a9e4;
    }
    if (0x3d1e7e08 < uVar1) {
      if (uVar1 < 0x411a658b) {
        if (uVar1 < 0x3f1a6265) {
          if (uVar1 < 0x3e4541d9) {
            if (uVar1 == 0x3e3cf313) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10a8,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x43f;
            }
            else {
              if ((uVar1 != 0x3e4541d8) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f70,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x442;
            }
          }
          else if (uVar1 == 0x3e520dcb) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c98,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x41b;
          }
          else {
            if ((uVar1 != 0x3f1a6264) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c60,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x408;
          }
        }
        else if (uVar1 < 0x4024f154) {
          if (uVar1 == 0x40207425) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1058,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x83c;
          }
          else {
            if ((uVar1 != 0x4024f153) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1018,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x45e;
          }
        }
        else if (uVar1 == 0x405210f1) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1118,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x45b;
        }
        else if (uVar1 == 0x40d59ee7) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1090,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x82c;
        }
        else {
          if ((uVar1 != 0x411a658a) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d08,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x409;
        }
      }
      else {
        if (0x4231c06c < uVar1) {
          if (uVar1 < 0x432078df) {
            if (uVar1 == 0x423cf95f) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c50,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x412;
            }
            else {
              if ((uVar1 != 0x432078de) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ec0,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x456;
            }
          }
          else if (uVar1 == 0x432bb1d1) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fb0,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x445;
          }
          else if (uVar1 == 0x433cfaf2) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f98,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x46f;
          }
          else {
            if ((uVar1 != 0x434549b7) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e60,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x432;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 < 0x41454692) {
          if (uVar1 == 0x413cf7cc) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f76670,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 1099;
          }
          else {
            if ((uVar1 != 0x41454691) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c40,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x41e;
          }
        }
        else if (uVar1 == 0x422bb03e) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e88,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x451;
        }
        else {
          if ((uVar1 != 0x4231c06c) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e50,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x454;
        }
      }
      goto FUN_0747a9e4;
    }
    if (0x3a2ba3a6 < uVar1) {
      if (uVar1 < 0x3b68333b) {
        if (0x3a453b8c < uVar1) {
          if (uVar1 == 0x3b206c46) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fc0,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x491;
          }
          else {
            if ((uVar1 != 0x3b68333a) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fc8,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x850;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 == 0x3a386f99) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1000,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x470;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa0fe8;
        if (uVar1 != 0x3a453b8c) goto LAB_0747aa18;
LAB_0747a3b0:
        uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x428;
        goto FUN_0747a9e4;
      }
      if (uVar1 < 0x3c453eb3) {
        if (uVar1 == 0x3c2ba6cc) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ed8,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x46d;
        }
        else {
          if ((uVar1 != 0x3c453eb2) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f90,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x44a;
        }
        goto FUN_0747a9e4;
      }
      if (uVar1 == 0x3c49bbe0) {
        uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65ca0,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x42a;
          goto FUN_0747a9e4;
        }
        goto LAB_0747aa18;
      }
      if (uVar1 == 0x3c520aa5) {
        uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1028,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x43b;
          goto FUN_0747a9e4;
        }
        goto LAB_0747aa18;
      }
      puVar5 = (undefined8 *)PTR_DAT_08fa0e70;
      if (uVar1 != 0x3d1e7e08) goto LAB_0747aa18;
LAB_07479cdc:
      uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_0747aa18;
      uVar2 = 0x85f;
      goto FUN_0747a9e4;
    }
    if (0x37386ae0 < uVar1) {
      if (uVar1 < 0x38453867) {
        if (uVar1 == 0x382ba080) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65ce0,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x423;
        }
        else {
          if ((uVar1 != 0x38453866) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1008,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x449;
        }
      }
      else if (uVar1 == 0x38520459) {
        uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ef8,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x44f;
      }
      else {
        if ((uVar1 != 0x3a2ba3a6) ||
           (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cb8,0), (uVar3 & 1) == 0))
        goto LAB_0747aa18;
        uVar2 = 0x402;
      }
      goto FUN_0747a9e4;
    }
    if (uVar1 < 0x356f22fd) {
      if (uVar1 == 0x106c50ab) {
        uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f88,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x46c;
      }
      else {
        if ((uVar1 != 0x356f22fc) ||
           (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ee0,0), (uVar3 & 1) == 0))
        goto LAB_0747aa18;
        uVar2 = 0x47a;
      }
      goto FUN_0747a9e4;
    }
    puVar5 = (undefined8 *)PTR_DAT_08fa0ef0;
    if (uVar1 != 0x3729c4a7) {
      if ((uVar1 != 0x37386ae0) ||
         (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cc0,0), (uVar3 & 1) == 0))
      goto LAB_0747aa18;
      uVar2 = 0x421;
      goto FUN_0747a9e4;
    }
LAB_0747a98c:
    uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
LAB_0747aa18:
      thunk_FUN_04097b88(PTR_DAT_08fa1148);
      uVar2 = FUN_0735c7b4();
      thunk_FUN_04097b88(PTR_DAT_08f7c590);
      uVar4 = thunk_FUN_0406deb8();
      FUN_074e732c(uVar4,uVar2,0);
      uVar2 = thunk_FUN_04097b88(PTR_DAT_08fa1150);
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar4,uVar2);
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
                uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65ca8,0);
                if ((uVar3 & 1) == 0) goto LAB_0747aa18;
                uVar2 = 0x401;
              }
              else {
                if ((uVar1 != 0x5d31eaed) ||
                   (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c48,0),
                   (uVar3 & 1) == 0)) goto LAB_0747aa18;
                uVar2 = 0x427;
              }
            }
            else if (uVar1 == 0x5d342984) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f9e8b8,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x448;
            }
            else if (uVar1 == 0x5d4e6d01) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c18,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x416;
            }
            else {
              if ((uVar1 != 0x5e25208d) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e78,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x44d;
            }
            goto FUN_0747a9e4;
          }
          if (uVar1 < 0x5c2e17c4) {
            if (uVar1 == 0x5c22ded0) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cb0,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x40b;
            }
            else {
              if ((uVar1 != 0x5c2e17c3) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10f0,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x481;
            }
          }
          else if (uVar1 == 0x5c3ae3b6) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c88,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x40d;
          }
          else {
            if ((uVar1 != 0x5c7ad43c) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ee8,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x48c;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 < 0x5f2e1c7d) {
          if (uVar1 < 0x5e4335a2) {
            if (uVar1 == 0x5e2e1ae9) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1010,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x42f;
            }
            else {
              if ((uVar1 != 0x5e4335a1) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65cd0,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x422;
            }
          }
          else if (uVar1 == 0x5e4e6e94) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f68,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x463;
          }
          else {
            if ((uVar1 != 0x5f2e1c7c) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10b8,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x44c;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 < 0x605481e9) {
          puVar5 = (undefined8 *)PTR_DAT_08fa0e58;
          if (uVar1 != 0x603aea02) {
            if ((uVar1 != 0x605481e8) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f9cf50,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x417;
            goto FUN_0747a9e4;
          }
LAB_0747a330:
          uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x468;
          goto FUN_0747a9e4;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa10f8;
        if (uVar1 != 0x612e1fa2) {
          if (uVar1 == 0x61366e67) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c78,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x413;
          }
          else {
            if ((uVar1 != 0x6222e842) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c70,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x438;
          }
          goto FUN_0747a9e4;
        }
        goto LAB_0747a98c;
      }
      if (0x572e0fe4 < uVar1) {
        if (0x5836603c < uVar1) {
          if (uVar1 < 0x5867fd09) {
            if (uVar1 == 0x583add6a) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ff0,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x42b;
            }
            else {
              if ((uVar1 != 0x5867fd08) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0eb8,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x435;
            }
          }
          else if (uVar1 == 0x5a432f55) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e68,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x480;
          }
          else if (uVar1 == 0x5b31e7c7) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d38,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x426;
          }
          else {
            if ((uVar1 != 0x5c1ccea2) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65d20,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x407;
          }
          goto FUN_0747a9e4;
        }
        if (0x581cc856 < uVar1) {
          if (uVar1 == 0x58299449) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65ce8,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x403;
          }
          else {
            if ((uVar1 != 0x5836603c) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1080,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x461;
          }
          goto FUN_0747a9e4;
        }
        puVar5 = (undefined8 *)PTR_DAT_08f65c38;
        if (uVar1 != 0x57365ea9) {
          if ((uVar1 != 0x581cc856) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c90,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x406;
          goto FUN_0747a9e4;
        }
FUN_0747a080:
        uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_0747aa18;
        uVar2 = 0x414;
        goto FUN_0747a9e4;
      }
      if (0x55251262 < uVar1) {
        if (uVar1 < 0x5539c889) {
          if (uVar1 == 0x552e0cbe) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1110,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x44e;
          }
          else {
            if ((uVar1 != 0x5539c888) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0ec8,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x484;
          }
        }
        else if (uVar1 == 0x562e0e51) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f20,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x43e;
        }
        else if (uVar1 == 0x5722d6f1) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c28,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x40c;
        }
        else {
          if ((uVar1 != 0x572e0fe4) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f48,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x43a;
        }
        goto FUN_0747a9e4;
      }
      if (uVar1 < 0x504e588b) {
        if (uVar1 == 0x503d0f69) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f9ee18,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x440;
        }
        else {
          if ((uVar1 != 0x504e588a) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fa0,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x446;
        }
        goto FUN_0747a9e4;
      }
      puVar5 = (undefined8 *)PTR_DAT_08fa0f10;
      if (uVar1 == 0x54ecc315) goto LAB_0747a3b0;
      puVar5 = (undefined8 *)PTR_DAT_08f9fde8;
      if (uVar1 != 0x55251262) goto LAB_0747aa18;
    }
    else {
      if (uVar1 < 0xb38f1d87) {
        if (uVar1 < 0x683af69b) {
          if (0x6254850e < uVar1) {
            if (uVar1 < 0x6336718e) {
              if (uVar1 == 0x625fbe01) {
                uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e80,0);
                if ((uVar3 & 1) == 0) goto LAB_0747aa18;
                uVar2 = 0x46a;
              }
              else {
                if ((uVar1 != 0x6336718d) ||
                   (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10d0,0),
                   (uVar3 & 1) == 0)) goto LAB_0747aa18;
                uVar2 = 0x814;
              }
              goto FUN_0747a9e4;
            }
            if (uVar1 == 0x6422eb68) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1098,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x429;
              goto FUN_0747a9e4;
            }
            puVar5 = (undefined8 *)PTR_DAT_08fa0f60;
            if (uVar1 != 0x6429ff0b) {
              if ((uVar1 != 0x683af69a) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1120,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x439;
              goto FUN_0747a9e4;
            }
            goto LAB_0747a920;
          }
          if (0x62366ffa < uVar1) {
            if (uVar1 == 0x6247b91b) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f18,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x488;
            }
            else {
              if ((uVar1 != 0x6254850e) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c08,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x418;
            }
            goto FUN_0747a9e4;
          }
          if (uVar1 == 0x6229a407) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10b0,0);
            if ((uVar3 & 1) != 0) {
              uVar2 = 0x483;
              goto FUN_0747a9e4;
            }
            goto LAB_0747aa18;
          }
          puVar5 = (undefined8 *)PTR_DAT_08f65e68;
          if (uVar1 != 0x62366ffa) goto LAB_0747aa18;
          goto FUN_0747a080;
        }
        if (uVar1 < 0x79fc4cdd) {
          if (0x6c3f7a14 < uVar1) {
            if (uVar1 == 0x6e344447) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1020,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x482;
            }
            else {
              if ((uVar1 != 0x79fc4cdc) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1040,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x457;
            }
            goto FUN_0747a9e4;
          }
          puVar5 = (undefined8 *)PTR_DAT_08fa1108;
          if (uVar1 != 0x6ac023e8) {
            if ((uVar1 != 0x6c3f7a14) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08f65c10,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x411;
            goto FUN_0747a9e4;
          }
          goto LAB_0747a354;
        }
        if (uVar1 < 0x8301deec) {
          puVar5 = (undefined8 *)PTR_DAT_08fa1078;
          if (((uVar1 == 0x81f731c3) ||
              (puVar5 = (undefined8 *)PTR_DAT_08fa10c0, uVar1 == 0x8301deeb)) &&
             (uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0), (uVar3 & 1) != 0)) {
            uVar2 = 0xc04;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa0f08;
        if ((uVar1 != 0x86f739a2) && (puVar5 = (undefined8 *)PTR_DAT_08fa10c8, uVar1 != 0x8801e6ca))
        {
          puVar5 = (undefined8 *)PTR_DAT_08fa1030;
          if (uVar1 != 0xb38f1d86) goto LAB_0747aa18;
          goto LAB_07479dd8;
        }
        goto LAB_0747a944;
      }
      if (uVar1 < 0xe23c4d72) {
        if (0xc458a0a9 < uVar1) {
          if (uVar1 < 0xda1c9924) {
            if (uVar1 == 0xc6e4a1f4) {
              uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1088,0);
              if ((uVar3 & 1) == 0) goto LAB_0747aa18;
              uVar2 = 0x464;
            }
            else {
              if ((uVar1 != 0xda1c9923) ||
                 (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f78,0),
                 (uVar3 & 1) == 0)) goto LAB_0747aa18;
              uVar2 = 0x485;
            }
          }
          else if (uVar1 == 0xdb3aafca) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1048,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x203b;
          }
          else if (uVar1 == 0xe03ab7a9) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0e98,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x243b;
          }
          else {
            if ((uVar1 != 0xe23c4d71) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1060,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x281a;
          }
          goto FUN_0747a9e4;
        }
        if (0xc0315742 < uVar1) {
          if (uVar1 == 0xc1235e46) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1138,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x82e;
          }
          else {
            if ((uVar1 != 0xc458a0a9) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0eb0,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x45a;
          }
          goto FUN_0747a9e4;
        }
        if (uVar1 == 0xbd35cf27) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f38,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x201a;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa0fe0;
        if (uVar1 != 0xc0315742) goto LAB_0747aa18;
        goto LAB_07479cdc;
      }
      if (uVar1 < 0xeb9e8568) {
        if (uVar1 < 0xe93ac5d5) {
          if (uVar1 == 0xe43abdf5) {
            uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa10d8,0);
            if ((uVar3 & 1) == 0) goto LAB_0747aa18;
            uVar2 = 0x143b;
          }
          else {
            if ((uVar1 != 0xe93ac5d4) ||
               (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0fa8,0),
               (uVar3 & 1) == 0)) goto LAB_0747aa18;
            uVar2 = 0x1c3b;
          }
        }
        else if (uVar1 == 0xe98e391b) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1100,0);
          if ((uVar3 & 1) == 0) goto LAB_0747aa18;
          uVar2 = 0x843;
        }
        else {
          if ((uVar1 != 0xeb9e8567) ||
             (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa0f40,0), (uVar3 & 1) == 0)
             ) goto LAB_0747aa18;
          uVar2 = 0x47c;
        }
        goto FUN_0747a9e4;
      }
      if (0xf0e14d63 < uVar1) {
        if (uVar1 == 0xf491fb4a) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1068,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x42e;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        if (uVar1 == 0xfee1636d) {
          uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1128,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x486;
            goto FUN_0747a9e4;
          }
          goto LAB_0747aa18;
        }
        puVar5 = (undefined8 *)PTR_DAT_08fa1070;
        if (uVar1 != 0xff1fc348) goto LAB_0747aa18;
        goto LAB_0747a330;
      }
      puVar5 = (undefined8 *)PTR_DAT_08fa0f50;
      if (uVar1 != 0xee5e60a8) {
        if ((uVar1 != 0xf0e14d63) ||
           (uVar3 = thunk_FUN_07367938(uVar2,*(undefined8 *)PTR_DAT_08fa1140,0), (uVar3 & 1) == 0))
        goto LAB_0747aa18;
        uVar2 = 0x46b;
        goto FUN_0747a9e4;
      }
    }
    uVar3 = thunk_FUN_07367938(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_0747aa18;
    uVar2 = 0x42c;
  }
FUN_0747a9e4:
  uVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f656c8);
  FUN_07477650(uVar4,uVar2,1,0);
  return uVar4;
}


