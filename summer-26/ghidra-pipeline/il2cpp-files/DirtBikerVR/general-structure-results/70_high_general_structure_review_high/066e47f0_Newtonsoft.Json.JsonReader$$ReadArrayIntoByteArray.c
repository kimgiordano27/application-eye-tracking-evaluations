/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 066e47f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_065d1f84();
  uVar1 = FUN_0672d9fc(uVar2,0);
  if (uVar1 < 0x502987b2) {
    if (0x434549b7 < uVar1) {
      if (0x48521d89 < uVar1) {
        if (uVar1 < 0x4c20870a) {
          if (uVar1 < 0x4963683e) {
            if (uVar1 < 0x4924ff7f) {
              if (uVar1 == 0x48545c20) {
                uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7768,0);
                if ((uVar3 & 1) == 0) goto LAB_066e6864;
                uVar2 = 0x419;
              }
              else {
                if ((uVar1 != 0x4924ff7e) ||
                   (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77d0,0),
                   (uVar3 & 1) == 0)) goto LAB_066e6864;
                uVar2 = 0x436;
              }
            }
            else if (uVar1 == 0x49521f1c) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76f8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x41d;
            }
            else {
              if ((uVar1 != 0x4963683d) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7548,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x434;
            }
            goto LAB_066e6830;
          }
          if (0x4a5220af < uVar1) {
            if (uVar1 == 0x4a545f46) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75a8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x487;
            }
            else if (uVar1 == 0x4b1cb3df) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74e8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x465;
            }
            else {
              if ((uVar1 != 0x4c208709) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7690,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x447;
            }
            goto LAB_066e6830;
          }
          puVar5 = (undefined8 *)PTR_DAT_084a7718;
          if (uVar1 != 0x49c9fb2c) {
            if ((uVar1 != 0x4a5220af) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7678,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x441;
            goto LAB_066e6830;
          }
        }
        else {
          if (0x4d455975 < uVar1) {
            if (0x4e388f15 < uVar1) {
              if (uVar1 == 0x4f2bc4b5) {
                uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a49c8,0);
                if ((uVar3 & 1) == 0) goto LAB_066e6864;
                uVar2 = 0x47e;
              }
              else if (uVar1 == 0x4f3acf3f) {
                uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76c0,0);
                if ((uVar3 & 1) == 0) goto LAB_066e6864;
                uVar2 = 0x41a;
              }
              else {
                if ((uVar1 != 0x502987b1) ||
                   (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7528,0),
                   (uVar3 & 1) == 0)) goto LAB_066e6864;
                uVar2 = 0x452;
              }
              goto LAB_066e6830;
            }
            puVar5 = (undefined8 *)PTR_DAT_084a74f8;
            if (uVar1 != 0x4e2bc322) {
              if ((uVar1 != 0x4e388f15) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7778,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x40f;
              goto LAB_066e6830;
            }
LAB_066e61a0:
            uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x141a;
            goto LAB_066e6830;
          }
          if (uVar1 < 0x4c3aca87) {
            if (uVar1 == 0x4c22c5a0) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7818,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x462;
            }
            else {
              if ((uVar1 != 0x4c3aca86) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7510,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x40e;
            }
            goto LAB_066e6830;
          }
          puVar5 = (undefined8 *)PTR_DAT_084a7810;
          if (uVar1 != 0x4d431ade) {
            if ((uVar1 != 0x4d455975) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7738,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x444;
            goto LAB_066e6830;
          }
        }
        uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x443;
        goto LAB_066e6830;
      }
      if (0x462977f3 < uVar1) {
        if (uVar1 < 0x47455004) {
          if (uVar1 < 0x4731c84c) {
            if (uVar1 == 0x471a6efc) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77b0,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x425;
            }
            else {
              if ((uVar1 != 0x4731c84b) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74d0,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x46e;
            }
          }
          else if (uVar1 == 0x47388410) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74f0,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x410;
          }
          else {
            if ((uVar1 != 0x47455003) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a6428,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x41f;
          }
          goto LAB_066e6830;
        }
        if (uVar1 < 0x4833569a) {
          if (uVar1 == 0x481a708f) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a5398,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x42d;
          }
          else {
            if ((uVar1 != 0x48335699) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75d0,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x45d;
          }
          goto LAB_066e6830;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7870;
        if (uVar1 != 0x483885a3) {
          if (uVar1 == 0x483d02d1) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75a0,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x437;
          }
          else {
            if ((uVar1 != 0x48521d89) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a5388,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x41c;
          }
          goto LAB_066e6830;
        }
LAB_066e676c:
        uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x85d;
        goto LAB_066e6830;
      }
      if (uVar1 < 0x45430e47) {
        if (uVar1 < 0x44387f58) {
          if (uVar1 == 0x435215aa) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7780,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x424;
          }
          else {
            if ((uVar1 != 0x44387f57) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7580,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x478;
          }
        }
        else if (uVar1 == 0x443cfc85) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7608,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x453;
        }
        else {
          if ((uVar1 != 0x45430e46) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77c0,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x420;
        }
        goto LAB_066e6830;
      }
      if (uVar1 < 0x455218d1) {
        if (uVar1 == 0x454e4739) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77b8,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x415;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7658;
        if (uVar1 != 0x455218d0) goto LAB_066e6864;
LAB_066e5c24:
        uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x241a;
        goto LAB_066e6830;
      }
      puVar5 = (undefined8 *)PTR_DAT_084a6540;
      if (uVar1 != 0x4567df1f) {
        if (uVar1 == 0x461a6d69) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7630,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0xc0a;
        }
        else {
          if ((uVar1 != 0x462977f3) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76e0,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x405;
        }
        goto LAB_066e6830;
      }
LAB_066e6790:
      uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_066e6864;
      uVar2 = 0x804;
      goto LAB_066e6830;
    }
    if (0x3d1e7e08 < uVar1) {
      if (uVar1 < 0x411a658b) {
        if (uVar1 < 0x3f1a6265) {
          if (uVar1 < 0x3e4541d9) {
            if (uVar1 == 0x3e3cf313) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77d8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x43f;
            }
            else {
              if ((uVar1 != 0x3e4541d8) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75e8,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x442;
            }
          }
          else if (uVar1 == 0x3e520dcb) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7660,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x41b;
          }
          else {
            if ((uVar1 != 0x3f1a6264) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7578,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x408;
          }
        }
        else if (uVar1 < 0x4024f154) {
          if (uVar1 == 0x40207425) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7740,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x83c;
          }
          else {
            if ((uVar1 != 0x4024f153) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76f0,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x45e;
          }
        }
        else if (uVar1 == 0x405210f1) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7850,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x45b;
        }
        else if (uVar1 == 0x40d59ee7) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77a0,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x82c;
        }
        else {
          if ((uVar1 != 0x411a658a) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7790,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x409;
        }
      }
      else {
        if (0x4231c06c < uVar1) {
          if (uVar1 < 0x432078df) {
            if (uVar1 == 0x423cf95f) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_0849f248,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x412;
            }
            else {
              if ((uVar1 != 0x432078de) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7538,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x456;
            }
          }
          else if (uVar1 == 0x432bb1d1) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7640,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x445;
          }
          else if (uVar1 == 0x433cfaf2) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7620,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x46f;
          }
          else {
            if ((uVar1 != 0x434549b7) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7498,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x432;
          }
          goto LAB_066e6830;
        }
        if (uVar1 < 0x41454692) {
          if (uVar1 == 0x413cf7cc) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7838,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 1099;
          }
          else {
            if ((uVar1 != 0x41454691) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7530,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x41e;
          }
        }
        else if (uVar1 == 0x422bb03e) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74c8,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x451;
        }
        else {
          if ((uVar1 != 0x4231c06c) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7488,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x454;
        }
      }
      goto LAB_066e6830;
    }
    if (0x3a2ba3a6 < uVar1) {
      if (uVar1 < 0x3b68333b) {
        if (0x3a453b8c < uVar1) {
          if (uVar1 == 0x3b206c46) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7668,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x491;
          }
          else {
            if ((uVar1 != 0x3b68333a) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7670,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x850;
          }
          goto LAB_066e6830;
        }
        if (uVar1 == 0x3a386f99) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76c8,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x470;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a76a8;
        if (uVar1 != 0x3a453b8c) goto LAB_066e6864;
LAB_066e61fc:
        uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x428;
        goto LAB_066e6830;
      }
      if (uVar1 < 0x3c453eb3) {
        if (uVar1 == 0x3c2ba6cc) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7550,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x46d;
        }
        else {
          if ((uVar1 != 0x3c453eb2) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7618,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x44a;
        }
        goto LAB_066e6830;
      }
      if (uVar1 == 0x3c49bbe0) {
        uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7680,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x42a;
          goto LAB_066e6830;
        }
        goto LAB_066e6864;
      }
      if (uVar1 == 0x3c520aa5) {
        uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7708,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x43b;
          goto LAB_066e6830;
        }
        goto LAB_066e6864;
      }
      puVar5 = (undefined8 *)PTR_DAT_084a74a8;
      if (uVar1 != 0x3d1e7e08) goto LAB_066e6864;
LAB_066e5b28:
      uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_066e6864;
      uVar2 = 0x85f;
      goto LAB_066e6830;
    }
    if (0x37386ae0 < uVar1) {
      if (uVar1 < 0x38453867) {
        if (uVar1 == 0x382ba080) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7728,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x423;
        }
        else {
          if ((uVar1 != 0x38453866) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76d0,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x449;
        }
      }
      else if (uVar1 == 0x38520459) {
        uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7570,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x44f;
      }
      else {
        if ((uVar1 != 0x3a2ba3a6) ||
           (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76b8,0), (uVar3 & 1) == 0))
        goto LAB_066e6864;
        uVar2 = 0x402;
      }
      goto LAB_066e6830;
    }
    if (uVar1 < 0x356f22fd) {
      if (uVar1 == 0x106c50ab) {
        uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7610,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x46c;
      }
      else {
        if ((uVar1 != 0x356f22fc) ||
           (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7558,0), (uVar3 & 1) == 0))
        goto LAB_066e6864;
        uVar2 = 0x47a;
      }
      goto LAB_066e6830;
    }
    puVar5 = (undefined8 *)PTR_DAT_084a7568;
    if (uVar1 != 0x3729c4a7) {
      if ((uVar1 != 0x37386ae0) ||
         (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_0848fc20,0), (uVar3 & 1) == 0))
      goto LAB_066e6864;
      uVar2 = 0x421;
      goto LAB_066e6830;
    }
LAB_066e67d8:
    uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
LAB_066e6864:
      thunk_FUN_03af1434(PTR_DAT_084a7888);
      uVar2 = FUN_065c0764();
      thunk_FUN_03af1434(PTR_DAT_08493018);
      uVar4 = thunk_FUN_03ac74bc();
      FUN_06753308(uVar4,uVar2,0);
      uVar2 = thunk_FUN_03af1434(PTR_DAT_084a7890);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar2);
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
                uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7688,0);
                if ((uVar3 & 1) == 0) goto LAB_066e6864;
                uVar2 = 0x401;
              }
              else {
                if ((uVar1 != 0x5d31eaed) ||
                   (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_0849f0d8,0),
                   (uVar3 & 1) == 0)) goto LAB_066e6864;
                uVar2 = 0x427;
              }
            }
            else if (uVar1 == 0x5d342984) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a4df0,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x448;
            }
            else if (uVar1 == 0x5d4e6d01) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74e0,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x416;
            }
            else {
              if ((uVar1 != 0x5e25208d) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74b8,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x44d;
            }
            goto LAB_066e6830;
          }
          if (uVar1 < 0x5c2e17c4) {
            if (uVar1 == 0x5c22ded0) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7698,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x40b;
            }
            else {
              if ((uVar1 != 0x5c2e17c3) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7820,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x481;
            }
          }
          else if (uVar1 == 0x5c3ae3b6) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a6538,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x40d;
          }
          else {
            if ((uVar1 != 0x5c7ad43c) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7560,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x48c;
          }
          goto LAB_066e6830;
        }
        if (uVar1 < 0x5f2e1c7d) {
          if (uVar1 < 0x5e4335a2) {
            if (uVar1 == 0x5e2e1ae9) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76d8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x42f;
            }
            else {
              if ((uVar1 != 0x5e4335a1) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76e8,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x422;
            }
          }
          else if (uVar1 == 0x5e4e6e94) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75e0,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x463;
          }
          else {
            if ((uVar1 != 0x5f2e1c7c) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77e8,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x44c;
          }
          goto LAB_066e6830;
        }
        if (uVar1 < 0x605481e9) {
          puVar5 = (undefined8 *)PTR_DAT_084a7490;
          if (uVar1 != 0x603aea02) {
            if ((uVar1 != 0x605481e8) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a3570,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x417;
            goto LAB_066e6830;
          }
LAB_066e617c:
          uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x468;
          goto LAB_066e6830;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7828;
        if (uVar1 != 0x612e1fa2) {
          if (uVar1 == 0x61366e67) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7600,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x413;
          }
          else {
            if ((uVar1 != 0x6222e842) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75f0,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x438;
          }
          goto LAB_066e6830;
        }
        goto LAB_066e67d8;
      }
      if (0x572e0fe4 < uVar1) {
        if (0x5836603c < uVar1) {
          if (uVar1 < 0x5867fd09) {
            if (uVar1 == 0x583add6a) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a76b0,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x42b;
            }
            else {
              if ((uVar1 != 0x5867fd08) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7520,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x435;
            }
          }
          else if (uVar1 == 0x5a432f55) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74a0,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x480;
          }
          else if (uVar1 == 0x5b31e7c7) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7868,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x426;
          }
          else {
            if ((uVar1 != 0x5c1ccea2) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77c8,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x407;
          }
          goto LAB_066e6830;
        }
        if (0x581cc856 < uVar1) {
          if (uVar1 == 0x58299449) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7750,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x403;
          }
          else {
            if ((uVar1 != 0x5836603c) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7788,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x461;
          }
          goto LAB_066e6830;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7518;
        if (uVar1 != 0x57365ea9) {
          if ((uVar1 != 0x581cc856) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7650,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x406;
          goto LAB_066e6830;
        }
LAB_066e5ecc:
        uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_066e6864;
        uVar2 = 0x414;
        goto LAB_066e6830;
      }
      if (0x55251262 < uVar1) {
        if (uVar1 < 0x5539c889) {
          if (uVar1 == 0x552e0cbe) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7848,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x44e;
          }
          else {
            if ((uVar1 != 0x5539c888) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7540,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x484;
          }
        }
        else if (uVar1 == 0x562e0e51) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_0848b568,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x43e;
        }
        else if (uVar1 == 0x5722d6f1) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7500,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x40c;
        }
        else {
          if ((uVar1 != 0x572e0fe4) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75c0,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x43a;
        }
        goto LAB_066e6830;
      }
      if (uVar1 < 0x504e588b) {
        if (uVar1 == 0x503d0f69) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a5328,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x440;
        }
        else {
          if ((uVar1 != 0x504e588a) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7628,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x446;
        }
        goto LAB_066e6830;
      }
      puVar5 = (undefined8 *)PTR_DAT_084a7590;
      if (uVar1 == 0x54ecc315) goto LAB_066e61fc;
      puVar5 = (undefined8 *)PTR_DAT_084a6430;
      if (uVar1 != 0x55251262) goto LAB_066e6864;
    }
    else {
      if (uVar1 < 0xb38f1d87) {
        if (uVar1 < 0x683af69b) {
          if (0x6254850e < uVar1) {
            if (uVar1 < 0x6336718e) {
              if (uVar1 == 0x625fbe01) {
                uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74c0,0);
                if ((uVar3 & 1) == 0) goto LAB_066e6864;
                uVar2 = 0x46a;
              }
              else {
                if ((uVar1 != 0x6336718d) ||
                   (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7800,0),
                   (uVar3 & 1) == 0)) goto LAB_066e6864;
                uVar2 = 0x814;
              }
              goto LAB_066e6830;
            }
            if (uVar1 == 0x6422eb68) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77a8,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x429;
              goto LAB_066e6830;
            }
            puVar5 = (undefined8 *)PTR_DAT_084a75d8;
            if (uVar1 != 0x6429ff0b) {
              if ((uVar1 != 0x683af69a) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7858,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x439;
              goto LAB_066e6830;
            }
            goto LAB_066e676c;
          }
          if (0x62366ffa < uVar1) {
            if (uVar1 == 0x6247b91b) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7598,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x488;
            }
            else {
              if ((uVar1 != 0x6254850e) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74b0,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x418;
            }
            goto LAB_066e6830;
          }
          if (uVar1 == 0x6229a407) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a77e0,0);
            if ((uVar3 & 1) != 0) {
              uVar2 = 0x483;
              goto LAB_066e6830;
            }
            goto LAB_066e6864;
          }
          puVar5 = (undefined8 *)PTR_DAT_084a7648;
          if (uVar1 != 0x62366ffa) goto LAB_066e6864;
          goto LAB_066e5ecc;
        }
        if (uVar1 < 0x79fc4cdd) {
          if (0x6c3f7a14 < uVar1) {
            if (uVar1 == 0x6e344447) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7700,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x482;
            }
            else {
              if ((uVar1 != 0x79fc4cdc) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7720,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x457;
            }
            goto LAB_066e6830;
          }
          puVar5 = (undefined8 *)PTR_DAT_084a7840;
          if (uVar1 != 0x6ac023e8) {
            if ((uVar1 != 0x6c3f7a14) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_0849f240,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x411;
            goto LAB_066e6830;
          }
          goto LAB_066e61a0;
        }
        if (uVar1 < 0x8301deec) {
          puVar5 = (undefined8 *)PTR_DAT_084a7770;
          if (((uVar1 == 0x81f731c3) ||
              (puVar5 = (undefined8 *)PTR_DAT_084a77f0, uVar1 == 0x8301deeb)) &&
             (uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0), (uVar3 & 1) != 0)) {
            uVar2 = 0xc04;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7588;
        if ((uVar1 != 0x86f739a2) && (puVar5 = (undefined8 *)PTR_DAT_084a77f8, uVar1 != 0x8801e6ca))
        {
          puVar5 = (undefined8 *)PTR_DAT_084a7710;
          if (uVar1 != 0xb38f1d86) goto LAB_066e6864;
          goto LAB_066e5c24;
        }
        goto LAB_066e6790;
      }
      if (uVar1 < 0xe23c4d72) {
        if (0xc458a0a9 < uVar1) {
          if (uVar1 < 0xda1c9924) {
            if (uVar1 == 0xc6e4a1f4) {
              uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7798,0);
              if ((uVar3 & 1) == 0) goto LAB_066e6864;
              uVar2 = 0x464;
            }
            else {
              if ((uVar1 != 0xda1c9923) ||
                 (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75f8,0),
                 (uVar3 & 1) == 0)) goto LAB_066e6864;
              uVar2 = 0x485;
            }
          }
          else if (uVar1 == 0xdb3aafca) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7730,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x203b;
          }
          else if (uVar1 == 0xe03ab7a9) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a74d8,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x243b;
          }
          else {
            if ((uVar1 != 0xe23c4d71) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7748,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x281a;
          }
          goto LAB_066e6830;
        }
        if (0xc0315742 < uVar1) {
          if (uVar1 == 0xc1235e46) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7878,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x82e;
          }
          else {
            if ((uVar1 != 0xc458a0a9) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7508,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x45a;
          }
          goto LAB_066e6830;
        }
        if (uVar1 == 0xbd35cf27) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75b0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x201a;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a76a0;
        if (uVar1 != 0xc0315742) goto LAB_066e6864;
        goto LAB_066e5b28;
      }
      if (uVar1 < 0xeb9e8568) {
        if (uVar1 < 0xe93ac5d5) {
          if (uVar1 == 0xe43abdf5) {
            uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7808,0);
            if ((uVar3 & 1) == 0) goto LAB_066e6864;
            uVar2 = 0x143b;
          }
          else {
            if ((uVar1 != 0xe93ac5d4) ||
               (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7638,0),
               (uVar3 & 1) == 0)) goto LAB_066e6864;
            uVar2 = 0x1c3b;
          }
        }
        else if (uVar1 == 0xe98e391b) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7830,0);
          if ((uVar3 & 1) == 0) goto LAB_066e6864;
          uVar2 = 0x843;
        }
        else {
          if ((uVar1 != 0xeb9e8567) ||
             (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a75b8,0), (uVar3 & 1) == 0)
             ) goto LAB_066e6864;
          uVar2 = 0x47c;
        }
        goto LAB_066e6830;
      }
      if (0xf0e14d63 < uVar1) {
        if (uVar1 == 0xf491fb4a) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7758,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x42e;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        if (uVar1 == 0xfee1636d) {
          uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7860,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x486;
            goto LAB_066e6830;
          }
          goto LAB_066e6864;
        }
        puVar5 = (undefined8 *)PTR_DAT_084a7760;
        if (uVar1 != 0xff1fc348) goto LAB_066e6864;
        goto LAB_066e617c;
      }
      puVar5 = (undefined8 *)PTR_DAT_084a75c8;
      if (uVar1 != 0xee5e60a8) {
        if ((uVar1 != 0xf0e14d63) ||
           (uVar3 = thunk_FUN_065cbffc(uVar2,*(undefined8 *)PTR_DAT_084a7880,0), (uVar3 & 1) == 0))
        goto LAB_066e6864;
        uVar2 = 0x46b;
        goto LAB_066e6830;
      }
    }
    uVar3 = thunk_FUN_065cbffc(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_066e6864;
    uVar2 = 0x42c;
  }
LAB_066e6830:
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883b0);
  FUN_066e3454(uVar4,uVar2,1,0);
  return uVar4;
}


