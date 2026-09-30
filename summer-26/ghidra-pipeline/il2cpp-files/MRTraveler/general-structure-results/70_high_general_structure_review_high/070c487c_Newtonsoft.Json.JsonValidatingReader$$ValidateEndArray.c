/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 070c487c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 070c4880 to 071c4937 has its CatchHandler @ 070c4630 */
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x3f0));
  FUN_03c8f898(PTR_DAT_08ea4240);
  FUN_03c8f898(PTR_DAT_08ea4248);
  FUN_03c8f898(PTR_DAT_08ea4250);
  FUN_03c8f898(PTR_DAT_08ea4258);
  FUN_03c8f898(PTR_DAT_08ea4260);
  FUN_03c8f898(PTR_DAT_08ea4268);
  FUN_03c8f898(PTR_DAT_08ea4270);
  FUN_03c8f898(PTR_DAT_08ea4278);
  FUN_03c8f898(PTR_DAT_08ea4280);
  FUN_03c8f898(PTR_DAT_08e76320);
  FUN_03c8f898(PTR_DAT_08ea4288);
  FUN_03c8f898(PTR_DAT_08ea4290);
  FUN_03c8f898(PTR_DAT_08ea2a90);
  FUN_03c8f898(PTR_DAT_08ea4298);
  FUN_03c8f898(PTR_DAT_08ea42a0);
                    /* try { // try from 070c4938 to 071c494f has its CatchHandler @ 070c4abc */
  FUN_03c8f898(PTR_DAT_08ea42a8);
  FUN_03c8f898(PTR_DAT_08ea42b0);
  FUN_03c8f898(PTR_DAT_08e76330);
                    /* try { // try from 070c4960 to 071c4967 has its CatchHandler @ 070c4aa0 */
  FUN_03c8f898(PTR_DAT_08ea42b8);
  FUN_03c8f898(PTR_DAT_08ea42c0);
                    /* try { // try from 070c4974 to 071c498f has its CatchHandler @ 070c4ab0 */
  FUN_03c8f898(PTR_DAT_08ea42c8);
  FUN_03c8f898(PTR_DAT_08ea42d0);
                    /* try { // try from 070c4990 to 071c49bf has its CatchHandler @ 070c4ab8 */
  FUN_03c8f898(PTR_DAT_08ea42d8);
  FUN_03c8f898(PTR_DAT_08ea42e0);
  FUN_03c8f898(PTR_DAT_08ea42e8);
  FUN_03c8f898(PTR_DAT_08ea42f0);
                    /* try { // try from 070c49c0 to 071c4a7f has its CatchHandler @ 070c4630 */
  FUN_03c8f898(PTR_DAT_08e9b500);
  FUN_03c8f898(PTR_DAT_08ea42f8);
  FUN_03c8f898(PTR_DAT_08ea4300);
  FUN_03c8f898(PTR_DAT_08ea4308);
  FUN_03c8f898(PTR_DAT_08ea2af0);
  FUN_03c8f898(PTR_DAT_08ea4310);
  FUN_03c8f898(PTR_DAT_08ea4318);
  FUN_03c8f898(PTR_DAT_08e713b8);
  FUN_03c8f898(PTR_DAT_08ea4320);
  FUN_03c8f898(PTR_DAT_08ea4328);
  FUN_03c8f898(PTR_DAT_08ea31d8);
  FUN_03c8f898(PTR_DAT_08ea4330);
  FUN_03c8f898(PTR_DAT_08ea4338);
  FUN_03c8f898(PTR_DAT_08ea4340);
  FUN_03c8f898(PTR_DAT_08ea31e0);
  FUN_03c8f898(PTR_DAT_08ea4348);
  FUN_03c8f898(PTR_DAT_08ea4350);
  FUN_03c8f898(PTR_DAT_08ea4358);
  FUN_03c8f898(PTR_DAT_08ea4360);
  FUN_03c8f898(PTR_DAT_08ea4368);
  FUN_03c8f898(PTR_DAT_08ea4370);
  FUN_03c8f898(PTR_DAT_08ea4378);
  FUN_03c8f898(PTR_DAT_08ea4380);
  FUN_03c8f898(PTR_DAT_08ea4388);
  FUN_03c8f898(PTR_DAT_08ea4390);
  FUN_03c8f898(PTR_DAT_08ea4398);
  FUN_03c8f898(PTR_DAT_08ea43a0);
  FUN_03c8f898(PTR_DAT_08ea43a8);
  FUN_03c8f898(PTR_DAT_08ea2b00);
  FUN_03c8f898(PTR_DAT_08ea43b0);
  FUN_03c8f898(PTR_DAT_08ea43b8);
  FUN_03c8f898(PTR_DAT_08ea43c0);
  FUN_03c8f898(PTR_DAT_08ea43c8);
  FUN_03c8f898(PTR_DAT_08ea43d0);
  FUN_03c8f898(PTR_DAT_08ea43d8);
  FUN_03c8f898(PTR_DAT_08ea43e0);
  FUN_03c8f898(PTR_DAT_08ea43e8);
  FUN_03c8f898(PTR_DAT_08e76338);
  FUN_03c8f898(PTR_DAT_08ea43f0);
  FUN_03c8f898(PTR_DAT_08ea43f8);
  FUN_03c8f898(PTR_DAT_08e86db8);
  FUN_03c8f898(PTR_DAT_08ea32c0);
  FUN_03c8f898(PTR_DAT_08ea4400);
  FUN_03c8f898(PTR_DAT_08ea4408);
  FUN_03c8f898(PTR_DAT_08ea4410);
  FUN_03c8f898(PTR_DAT_08ea4418);
  FUN_03c8f898(PTR_DAT_08ea4420);
  FUN_03c8f898(PTR_DAT_08ea4428);
  FUN_03c8f898(PTR_DAT_08ea4430);
  FUN_03c8f898(PTR_DAT_08ea4438);
  FUN_03c8f898(PTR_DAT_08ea4440);
  FUN_03c8f898(PTR_DAT_08ea4448);
  FUN_03c8f898(PTR_DAT_08ea4450);
  FUN_03c8f898(PTR_DAT_08ea4458);
  FUN_03c8f898(PTR_DAT_08ea4460);
  FUN_03c8f898(PTR_DAT_08ea4468);
  FUN_03c8f898(PTR_DAT_08ea4470);
  FUN_03c8f898(PTR_DAT_08e79220);
  FUN_03c8f898(PTR_DAT_08ea4478);
  FUN_03c8f898(PTR_DAT_08ea4480);
  FUN_03c8f898(PTR_DAT_08ea4488);
  FUN_03c8f898(PTR_DAT_08ea4490);
  FUN_03c8f898(PTR_DAT_08ea4498);
  FUN_03c8f898(PTR_DAT_08ea44a0);
  FUN_03c8f898(PTR_DAT_08ea44a8);
  FUN_03c8f898(PTR_DAT_08ea44b0);
  FUN_03c8f898(PTR_DAT_08ea44b8);
  FUN_03c8f898(PTR_DAT_08ea44c0);
  FUN_03c8f898(PTR_DAT_08ea44c8);
  FUN_03c8f898(PTR_DAT_08ea44d0);
  FUN_03c8f898(PTR_DAT_08ea44d8);
  FUN_03c8f898(PTR_DAT_08ea44e0);
  FUN_03c8f898(PTR_DAT_08ea44e8);
  FUN_03c8f898(PTR_DAT_08ea44f0);
  FUN_03c8f898(PTR_DAT_08ea44f8);
  FUN_03c8f898(PTR_DAT_08ea4500);
  FUN_03c8f898(PTR_DAT_08ea4508);
  FUN_03c8f898(PTR_DAT_08ea4510);
  FUN_03c8f898(PTR_DAT_08ea4518);
  FUN_03c8f898(PTR_DAT_08ea4520);
  FUN_03c8f898(PTR_DAT_08ea4528);
  FUN_03c8f898(PTR_DAT_08ea4530);
  FUN_03c8f898(PTR_DAT_08ea4538);
  FUN_03c8f898(PTR_DAT_08e76340);
  FUN_03c8f898(PTR_DAT_08ea4540);
  FUN_03c8f898(PTR_DAT_08e9f9d8);
  FUN_03c8f898(PTR_DAT_08ea4548);
  FUN_03c8f898(PTR_DAT_08ea4550);
  FUN_03c8f898(PTR_DAT_08ea4558);
  FUN_03c8f898(PTR_DAT_08ea4560);
  FUN_03c8f898(PTR_DAT_08ea4568);
  FUN_03c8f898(PTR_DAT_08e76348);
  FUN_03c8f898(PTR_DAT_08ea4570);
  FUN_03c8f898(PTR_DAT_08ea4578);
  FUN_03c8f898(PTR_DAT_08ea4580);
  FUN_03c8f898(PTR_DAT_08ea4588);
  FUN_03c8f898(PTR_DAT_08ea4590);
  FUN_03c8f898(PTR_DAT_08ea4598);
  FUN_03c8f898(PTR_DAT_08ea45a0);
  FUN_03c8f898(PTR_DAT_08ea45a8);
  FUN_03c8f898(PTR_DAT_08ea45b0);
  FUN_03c8f898(PTR_DAT_08ea45b8);
  FUN_03c8f898(PTR_DAT_08ea45c0);
  FUN_03c8f898(PTR_DAT_08ea45c8);
  FUN_03c8f898(PTR_DAT_08ea32c8);
  FUN_03c8f898(PTR_DAT_08ea45d0);
  FUN_03c8f898(PTR_DAT_08ea45d8);
  FUN_03c8f898(PTR_DAT_08ea45e0);
  FUN_03c8f898(PTR_DAT_08ea45e8);
  FUN_03c8f898(PTR_DAT_08ea45f0);
  FUN_03c8f898(PTR_DAT_08ea45f8);
  FUN_03c8f898(PTR_DAT_08ea4600);
  FUN_03c8f898(PTR_DAT_08ea4608);
  FUN_03c8f898(PTR_DAT_08ea4610);
  FUN_03c8f898(PTR_DAT_08ea4618);
  FUN_03c8f898(PTR_DAT_08ea4620);
  FUN_03c8f898(PTR_DAT_08ea4628);
  *(undefined1 *)(unaff_x20 + 0xf1d) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = FUN_06f789b4();
  uVar1 = FUN_070db7b8(uVar2,0);
  if (uVar1 < 0x502987b2) {
    if (0x434549b7 < uVar1) {
      if (0x48521d89 < uVar1) {
        if (uVar1 < 0x4c20870a) {
          if (uVar1 < 0x4963683e) {
            if (uVar1 < 0x4924ff7f) {
              if (uVar1 == 0x48545c20) {
                uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4518,0);
                if ((uVar3 & 1) == 0) goto LAB_070c6f50;
                uVar2 = 0x419;
              }
              else {
                if ((uVar1 != 0x4924ff7e) ||
                   (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4570,0),
                   (uVar3 & 1) == 0)) goto LAB_070c6f50;
                uVar2 = 0x436;
              }
            }
            else if (uVar1 == 0x49521f1c) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44a8,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x41d;
            }
            else {
              if ((uVar1 != 0x4963683d) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42f8,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x434;
            }
            goto FUN_070c6f1c;
          }
          if (0x4a5220af < uVar1) {
            if (uVar1 == 0x4a545f46) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4368,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x487;
            }
            else if (uVar1 == 0x4b1cb3df) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42a0,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x465;
            }
            else {
              if ((uVar1 != 0x4c208709) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4440,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x447;
            }
            goto FUN_070c6f1c;
          }
          puVar5 = (undefined8 *)PTR_DAT_08ea44c8;
          if (uVar1 != 0x49c9fb2c) {
            if ((uVar1 != 0x4a5220af) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4428,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x441;
            goto FUN_070c6f1c;
          }
        }
        else {
          if (0x4d455975 < uVar1) {
            if (0x4e388f15 < uVar1) {
              if (uVar1 == 0x4f2bc4b5) {
                uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4310,0);
                if ((uVar3 & 1) == 0) goto LAB_070c6f50;
                uVar2 = 0x47e;
              }
              else if (uVar1 == 0x4f3acf3f) {
                uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4470,0);
                if ((uVar3 & 1) == 0) goto LAB_070c6f50;
                uVar2 = 0x41a;
              }
              else {
                if ((uVar1 != 0x502987b1) ||
                   (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42d8,0),
                   (uVar3 & 1) == 0)) goto LAB_070c6f50;
                uVar2 = 0x452;
              }
              goto FUN_070c6f1c;
            }
            puVar5 = (undefined8 *)PTR_DAT_08ea42b0;
            if (uVar1 != 0x4e2bc322) {
              if ((uVar1 != 0x4e388f15) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4528,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x40f;
              goto FUN_070c6f1c;
            }
LAB_070c68a4:
            uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x141a;
            goto FUN_070c6f1c;
          }
          if (uVar1 < 0x4c3aca87) {
            if (uVar1 == 0x4c22c5a0) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45c0,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x462;
            }
            else {
              if ((uVar1 != 0x4c3aca86) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42c0,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x40e;
            }
            goto FUN_070c6f1c;
          }
          puVar5 = (undefined8 *)PTR_DAT_08ea45b8;
          if (uVar1 != 0x4d431ade) {
            if ((uVar1 != 0x4d455975) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44e8,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x444;
            goto FUN_070c6f1c;
          }
        }
        uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x443;
        goto FUN_070c6f1c;
      }
      if (0x462977f3 < uVar1) {
        if (uVar1 < 0x47455004) {
          if (uVar1 < 0x4731c84c) {
            if (uVar1 == 0x471a6efc) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4558,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x425;
            }
            else {
              if ((uVar1 != 0x4731c84b) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4288,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x46e;
            }
          }
          else if (uVar1 == 0x47388410) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42a8,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x410;
          }
          else {
            if ((uVar1 != 0x47455003) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea31d8,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x41f;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 < 0x4833569a) {
          if (uVar1 == 0x481a708f) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea2b00,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x42d;
          }
          else {
            if ((uVar1 != 0x48335699) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4390,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x45d;
          }
          goto FUN_070c6f1c;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4618;
        if (uVar1 != 0x483885a3) {
          if (uVar1 == 0x483d02d1) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4360,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x437;
          }
          else {
            if ((uVar1 != 0x48521d89) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea2af0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x41c;
          }
          goto FUN_070c6f1c;
        }
LAB_070c6d90:
        uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x85d;
        goto FUN_070c6f1c;
      }
      if (uVar1 < 0x45430e47) {
        if (uVar1 < 0x44387f58) {
          if (uVar1 == 0x435215aa) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4530,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x424;
          }
          else {
            if ((uVar1 != 0x44387f57) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4338,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x478;
          }
        }
        else if (uVar1 == 0x443cfc85) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43c8,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x453;
        }
        else {
          if ((uVar1 != 0x45430e46) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4568,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x420;
        }
        goto FUN_070c6f1c;
      }
      if (uVar1 < 0x455218d1) {
        if (uVar1 == 0x454e4739) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4560,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x415;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4408;
        if (uVar1 != 0x455218d0) goto LAB_070c6f50;
LAB_070c6340:
        uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x241a;
        goto FUN_070c6f1c;
      }
      puVar5 = (undefined8 *)PTR_DAT_08ea32c8;
      if (uVar1 != 0x4567df1f) {
        if (uVar1 == 0x461a6d69) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e76338,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0xc0a;
        }
        else {
          if ((uVar1 != 0x462977f3) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4490,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x405;
        }
        goto FUN_070c6f1c;
      }
LAB_070c6de4:
      uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_070c6f50;
      uVar2 = 0x804;
      goto FUN_070c6f1c;
    }
    if (0x3d1e7e08 < uVar1) {
      if (uVar1 < 0x411a658b) {
        if (uVar1 < 0x3f1a6265) {
          if (uVar1 < 0x3e4541d9) {
            if (uVar1 == 0x3e3cf313) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4580,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x43f;
            }
            else {
              if ((uVar1 != 0x3e4541d8) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43a8,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x442;
            }
          }
          else if (uVar1 == 0x3e520dcb) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4410,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x41b;
          }
          else {
            if ((uVar1 != 0x3f1a6264) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4330,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x408;
          }
        }
        else if (uVar1 < 0x4024f154) {
          if (uVar1 == 0x40207425) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44f0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x83c;
          }
          else {
            if ((uVar1 != 0x4024f153) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44a0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x45e;
          }
        }
        else if (uVar1 == 0x405210f1) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45f8,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x45b;
        }
        else if (uVar1 == 0x40d59ee7) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4548,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x82c;
        }
        else {
          if ((uVar1 != 0x411a658a) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e76340,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x409;
        }
      }
      else {
        if (0x4231c06c < uVar1) {
          if (uVar1 < 0x432078df) {
            if (uVar1 == 0x423cf95f) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e713b8,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x412;
            }
            else {
              if ((uVar1 != 0x432078de) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42e8,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x456;
            }
          }
          else if (uVar1 == 0x432bb1d1) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43f8,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x445;
          }
          else if (uVar1 == 0x433cfaf2) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43e0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x46f;
          }
          else {
            if ((uVar1 != 0x434549b7) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4250,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x432;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 < 0x41454692) {
          if (uVar1 == 0x413cf7cc) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45e0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 1099;
          }
          else {
            if ((uVar1 != 0x41454691) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42e0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x41e;
          }
        }
        else if (uVar1 == 0x422bb03e) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4280,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x451;
        }
        else {
          if ((uVar1 != 0x4231c06c) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4240,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x454;
        }
      }
      goto FUN_070c6f1c;
    }
    if (0x3a2ba3a6 < uVar1) {
      if (uVar1 < 0x3b68333b) {
        if (0x3a453b8c < uVar1) {
          if (uVar1 == 0x3b206c46) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4418,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x491;
          }
          else {
            if ((uVar1 != 0x3b68333a) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4420,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x850;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 == 0x3a386f99) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4478,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x470;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4458;
        if (uVar1 != 0x3a453b8c) goto LAB_070c6f50;
LAB_070c68f8:
        uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x428;
        goto FUN_070c6f1c;
      }
      if (uVar1 < 0x3c453eb3) {
        if (uVar1 == 0x3c2ba6cc) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4300,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x46d;
        }
        else {
          if ((uVar1 != 0x3c453eb2) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43d8,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x44a;
        }
        goto FUN_070c6f1c;
      }
      if (uVar1 == 0x3c49bbe0) {
        uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4430,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x42a;
          goto FUN_070c6f1c;
        }
        goto LAB_070c6f50;
      }
      if (uVar1 == 0x3c520aa5) {
        uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44b8,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 0x43b;
          goto FUN_070c6f1c;
        }
        goto LAB_070c6f50;
      }
      puVar5 = (undefined8 *)PTR_DAT_08ea4260;
      if (uVar1 != 0x3d1e7e08) goto LAB_070c6f50;
LAB_070c6244:
      uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_070c6f50;
      uVar2 = 0x85f;
      goto FUN_070c6f1c;
    }
    if (0x37386ae0 < uVar1) {
      if (uVar1 < 0x38453867) {
        if (uVar1 == 0x382ba080) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44d8,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x423;
        }
        else {
          if ((uVar1 != 0x38453866) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4480,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x449;
        }
      }
      else if (uVar1 == 0x38520459) {
        uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4328,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x44f;
      }
      else {
        if ((uVar1 != 0x3a2ba3a6) ||
           (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4468,0), (uVar3 & 1) == 0))
        goto LAB_070c6f50;
        uVar2 = 0x402;
      }
      goto FUN_070c6f1c;
    }
    if (uVar1 < 0x356f22fd) {
      if (uVar1 == 0x106c50ab) {
        uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43d0,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x46c;
      }
      else {
        if ((uVar1 != 0x356f22fc) ||
           (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4308,0), (uVar3 & 1) == 0))
        goto LAB_070c6f50;
        uVar2 = 0x47a;
      }
      goto FUN_070c6f1c;
    }
    puVar5 = (undefined8 *)PTR_DAT_08ea4320;
    if (uVar1 != 0x3729c4a7) {
      if ((uVar1 != 0x37386ae0) ||
         (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e79220,0), (uVar3 & 1) == 0))
      goto LAB_070c6f50;
      uVar2 = 0x421;
      goto FUN_070c6f1c;
    }
LAB_070c6e50:
    uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) {
LAB_070c6f50:
      thunk_FUN_03ce5214(PTR_DAT_08ea4630);
      uVar2 = FUN_06f683f8();
      thunk_FUN_03ce5214(PTR_DAT_08e69f78);
      uVar4 = thunk_FUN_03cf5234();
      FUN_07103620(uVar4,uVar2,0);
      uVar2 = thunk_FUN_03ce5214(PTR_DAT_08ea4638);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,uVar2);
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
                uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4438,0);
                if ((uVar3 & 1) == 0) goto LAB_070c6f50;
                uVar2 = 0x401;
              }
              else {
                if ((uVar1 != 0x5d31eaed) ||
                   (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e9b500,0),
                   (uVar3 & 1) == 0)) goto LAB_070c6f50;
                uVar2 = 0x427;
              }
            }
            else if (uVar1 == 0x5d342984) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4578,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x448;
            }
            else if (uVar1 == 0x5d4e6d01) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4298,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x416;
            }
            else {
              if ((uVar1 != 0x5e25208d) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4270,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x44d;
            }
            goto FUN_070c6f1c;
          }
          if (uVar1 < 0x5c2e17c4) {
            if (uVar1 == 0x5c22ded0) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4448,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x40b;
            }
            else {
              if ((uVar1 != 0x5c2e17c3) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45c8,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x481;
            }
          }
          else if (uVar1 == 0x5c3ae3b6) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea32c0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x40d;
          }
          else {
            if ((uVar1 != 0x5c7ad43c) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4318,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x48c;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 < 0x5f2e1c7d) {
          if (uVar1 < 0x5e4335a2) {
            if (uVar1 == 0x5e2e1ae9) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4488,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x42f;
            }
            else {
              if ((uVar1 != 0x5e4335a1) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4498,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x422;
            }
          }
          else if (uVar1 == 0x5e4e6e94) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43a0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x463;
          }
          else {
            if ((uVar1 != 0x5f2e1c7c) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4590,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x44c;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 < 0x605481e9) {
          puVar5 = (undefined8 *)PTR_DAT_08ea4248;
          if (uVar1 != 0x603aea02) {
            if ((uVar1 != 0x605481e8) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e9f9d8,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x417;
            goto FUN_070c6f1c;
          }
LAB_070c6880:
          uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x468;
          goto FUN_070c6f1c;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea45d0;
        if (uVar1 != 0x612e1fa2) {
          if (uVar1 == 0x61366e67) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43c0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x413;
          }
          else {
            if ((uVar1 != 0x6222e842) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43b0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x438;
          }
          goto FUN_070c6f1c;
        }
        goto LAB_070c6e50;
      }
      if (0x572e0fe4 < uVar1) {
        if (0x5836603c < uVar1) {
          if (uVar1 < 0x5867fd09) {
            if (uVar1 == 0x583add6a) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4460,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x42b;
            }
            else {
              if ((uVar1 != 0x5867fd08) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42d0,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x435;
            }
          }
          else if (uVar1 == 0x5a432f55) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4258,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x480;
          }
          else if (uVar1 == 0x5b31e7c7) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4610,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x426;
          }
          else {
            if ((uVar1 != 0x5c1ccea2) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e76348,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x407;
          }
          goto FUN_070c6f1c;
        }
        if (0x581cc856 < uVar1) {
          if (uVar1 == 0x58299449) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4500,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x403;
          }
          else {
            if ((uVar1 != 0x5836603c) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4538,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x461;
          }
          goto FUN_070c6f1c;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea42c8;
        if (uVar1 != 0x57365ea9) {
          if ((uVar1 != 0x581cc856) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4400,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x406;
          goto FUN_070c6f1c;
        }
LAB_070c65e0:
        uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
        if ((uVar3 & 1) == 0) goto LAB_070c6f50;
        uVar2 = 0x414;
        goto FUN_070c6f1c;
      }
      if (0x55251262 < uVar1) {
        if (uVar1 < 0x5539c889) {
          if (uVar1 == 0x552e0cbe) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45f0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x44e;
          }
          else {
            if ((uVar1 != 0x5539c888) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42f0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x484;
          }
        }
        else if (uVar1 == 0x562e0e51) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4358,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x43e;
        }
        else if (uVar1 == 0x5722d6f1) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e76330,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x40c;
        }
        else {
          if ((uVar1 != 0x572e0fe4) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4380,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x43a;
        }
        goto FUN_070c6f1c;
      }
      if (uVar1 < 0x504e588b) {
        if (uVar1 == 0x503d0f69) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea2a90,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x440;
        }
        else {
          if ((uVar1 != 0x504e588a) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43e8,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x446;
        }
        goto FUN_070c6f1c;
      }
      puVar5 = (undefined8 *)PTR_DAT_08ea4348;
      if (uVar1 == 0x54ecc315) goto LAB_070c68f8;
      puVar5 = (undefined8 *)PTR_DAT_08ea31e0;
      if (uVar1 != 0x55251262) goto LAB_070c6f50;
    }
    else {
      if (uVar1 < 0xb38f1d87) {
        if (uVar1 < 0x683af69b) {
          if (0x6254850e < uVar1) {
            if (uVar1 < 0x6336718e) {
              if (uVar1 == 0x625fbe01) {
                uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4278,0);
                if ((uVar3 & 1) == 0) goto LAB_070c6f50;
                uVar2 = 0x46a;
              }
              else {
                if ((uVar1 != 0x6336718d) ||
                   (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45a8,0),
                   (uVar3 & 1) == 0)) goto LAB_070c6f50;
                uVar2 = 0x814;
              }
              goto FUN_070c6f1c;
            }
            if (uVar1 == 0x6422eb68) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4550,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x429;
              goto FUN_070c6f1c;
            }
            puVar5 = (undefined8 *)PTR_DAT_08ea4398;
            if (uVar1 != 0x6429ff0b) {
              if ((uVar1 != 0x683af69a) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4600,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x439;
              goto FUN_070c6f1c;
            }
            goto LAB_070c6d90;
          }
          if (0x62366ffa < uVar1) {
            if (uVar1 == 0x6247b91b) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4350,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x488;
            }
            else {
              if ((uVar1 != 0x6254850e) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4268,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x418;
            }
            goto FUN_070c6f1c;
          }
          if (uVar1 == 0x6229a407) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4588,0);
            if ((uVar3 & 1) != 0) {
              uVar2 = 0x483;
              goto FUN_070c6f1c;
            }
            goto LAB_070c6f50;
          }
          puVar5 = (undefined8 *)PTR_DAT_08e86db8;
          if (uVar1 != 0x62366ffa) goto LAB_070c6f50;
          goto LAB_070c65e0;
        }
        if (uVar1 < 0x79fc4cdd) {
          if (0x6c3f7a14 < uVar1) {
            if (uVar1 == 0x6e344447) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44b0,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x482;
            }
            else {
              if ((uVar1 != 0x79fc4cdc) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44d0,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x457;
            }
            goto FUN_070c6f1c;
          }
          puVar5 = (undefined8 *)PTR_DAT_08ea45e8;
          if (uVar1 != 0x6ac023e8) {
            if ((uVar1 != 0x6c3f7a14) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08e76320,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x411;
            goto FUN_070c6f1c;
          }
          goto LAB_070c68a4;
        }
        if (uVar1 < 0x8301deec) {
          puVar5 = (undefined8 *)PTR_DAT_08ea4520;
          if (((uVar1 == 0x81f731c3) ||
              (puVar5 = (undefined8 *)PTR_DAT_08ea4598, uVar1 == 0x8301deeb)) &&
             (uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0), (uVar3 & 1) != 0)) {
            uVar2 = 0xc04;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4340;
        if ((uVar1 != 0x86f739a2) && (puVar5 = (undefined8 *)PTR_DAT_08ea45a0, uVar1 != 0x8801e6ca))
        {
          puVar5 = (undefined8 *)PTR_DAT_08ea44c0;
          if (uVar1 != 0xb38f1d86) goto LAB_070c6f50;
          goto LAB_070c6340;
        }
        goto LAB_070c6de4;
      }
      if (uVar1 < 0xe23c4d72) {
        if (0xc458a0a9 < uVar1) {
          if (uVar1 < 0xda1c9924) {
            if (uVar1 == 0xc6e4a1f4) {
              uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4540,0);
              if ((uVar3 & 1) == 0) goto LAB_070c6f50;
              uVar2 = 0x464;
            }
            else {
              if ((uVar1 != 0xda1c9923) ||
                 (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43b8,0),
                 (uVar3 & 1) == 0)) goto LAB_070c6f50;
              uVar2 = 0x485;
            }
          }
          else if (uVar1 == 0xdb3aafca) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44e0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x203b;
          }
          else if (uVar1 == 0xe03ab7a9) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4290,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x243b;
          }
          else {
            if ((uVar1 != 0xe23c4d71) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea44f8,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x281a;
          }
          goto FUN_070c6f1c;
        }
        if (0xc0315742 < uVar1) {
          if (uVar1 == 0xc1235e46) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4620,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x82e;
          }
          else {
            if ((uVar1 != 0xc458a0a9) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea42b8,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x45a;
          }
          goto FUN_070c6f1c;
        }
        if (uVar1 == 0xbd35cf27) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4370,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x201a;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4450;
        if (uVar1 != 0xc0315742) goto LAB_070c6f50;
        goto LAB_070c6244;
      }
      if (uVar1 < 0xeb9e8568) {
        if (uVar1 < 0xe93ac5d5) {
          if (uVar1 == 0xe43abdf5) {
            uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45b0,0);
            if ((uVar3 & 1) == 0) goto LAB_070c6f50;
            uVar2 = 0x143b;
          }
          else {
            if ((uVar1 != 0xe93ac5d4) ||
               (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea43f0,0),
               (uVar3 & 1) == 0)) goto LAB_070c6f50;
            uVar2 = 0x1c3b;
          }
        }
        else if (uVar1 == 0xe98e391b) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea45d8,0);
          if ((uVar3 & 1) == 0) goto LAB_070c6f50;
          uVar2 = 0x843;
        }
        else {
          if ((uVar1 != 0xeb9e8567) ||
             (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4378,0), (uVar3 & 1) == 0)
             ) goto LAB_070c6f50;
          uVar2 = 0x47c;
        }
        goto FUN_070c6f1c;
      }
      if (0xf0e14d63 < uVar1) {
        if (uVar1 == 0xf491fb4a) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4508,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x42e;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        if (uVar1 == 0xfee1636d) {
          uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4608,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = 0x486;
            goto FUN_070c6f1c;
          }
          goto LAB_070c6f50;
        }
        puVar5 = (undefined8 *)PTR_DAT_08ea4510;
        if (uVar1 != 0xff1fc348) goto LAB_070c6f50;
        goto LAB_070c6880;
      }
      puVar5 = (undefined8 *)PTR_DAT_08ea4388;
      if (uVar1 != 0xee5e60a8) {
        if ((uVar1 != 0xf0e14d63) ||
           (uVar3 = thunk_FUN_06f73d88(uVar2,*(undefined8 *)PTR_DAT_08ea4628,0), (uVar3 & 1) == 0))
        goto LAB_070c6f50;
        uVar2 = 0x46b;
        goto FUN_070c6f1c;
      }
    }
    uVar3 = thunk_FUN_06f73d88(uVar2,*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_070c6f50;
    uVar2 = 0x42c;
  }
FUN_070c6f1c:
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e693f0);
  FUN_070c3b5c(uVar4,uVar2,1,0);
  return uVar4;
}


