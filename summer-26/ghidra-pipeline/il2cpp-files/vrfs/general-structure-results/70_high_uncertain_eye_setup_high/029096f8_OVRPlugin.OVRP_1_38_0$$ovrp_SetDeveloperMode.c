/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 029096f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  lVar5 = FUN_031c8668(param_1,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0)) {
LAB_02909a58:
    uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar7,0);
  }
  puVar1 = PTR_DAT_06dc8bd0;
  if (10 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0xe] = lVar5;
                    /* try { // try from 02909738 to 02a0973b has its CatchHandler @ 02909744 */
                    /* try { // try from 0290973c to 02a09767 has its CatchHandler @ 02909278 */
    thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar5);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02909738 with catch @ 02909744
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02909668 with catch @ 02909748
                        */
    lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02909588 with catch @ 0290974c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 029095c8 with catch @ 02909750
                        */
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_02909a58;
    puVar1 = PTR_DAT_06ddf4d8;
                    /* try { // try from 02909768 to 02a0976b has its CatchHandler @ 029097ec */
    if (0xb < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xf] = lVar5;
      thunk_FUN_01656ef8(unaff_x19 + 0xf,lVar5);
      lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_02909a58;
      puVar1 = PTR_DAT_06d96f00;
      if (0xc < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x10] = lVar5;
        thunk_FUN_01656ef8(unaff_x19 + 0x10,lVar5);
        lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_02909a58;
        puVar1 = PTR_DAT_06dde460;
        if (0xd < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x11] = lVar5;
          thunk_FUN_01656ef8(unaff_x19 + 0x11,lVar5);
          lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
          goto LAB_02909a58;
          puVar1 = PTR_DAT_06e322d8;
          if (0xe < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x12] = lVar5;
            thunk_FUN_01656ef8(unaff_x19 + 0x12,lVar5);
            lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
            goto LAB_02909a58;
            puVar1 = PTR_DAT_06dba4a8;
            if (0xf < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x13] = lVar5;
              thunk_FUN_01656ef8(unaff_x19 + 0x13,lVar5);
              lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
              goto LAB_02909a58;
              if (0x10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x14] = lVar5;
                thunk_FUN_01656ef8(unaff_x19 + 0x14,lVar5);
                lVar5 = FUN_031c8668(*unaff_x22,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0
                   )) goto LAB_02909a58;
                puVar1 = PTR_DAT_06db4eb8;
                if (0x11 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0x15] = lVar5;
                  thunk_FUN_01656ef8(unaff_x19 + 0x15,lVar5);
                  lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar6 == 0)) goto LAB_02909a58;
                  puVar4 = PTR_DAT_06e434f0;
                  puVar3 = PTR_DAT_06ddfa10;
                  puVar2 = PTR_DAT_06daad00;
                  puVar1 = PTR_DAT_06d8b368;
                  if (0x12 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x16] = lVar5;
                    thunk_FUN_01656ef8(unaff_x19 + 0x16,lVar5);
                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                    thunk_FUN_01656ef8();
                    uVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
                    puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                    *puVar8 = uVar7;
                    thunk_FUN_01656ef8(puVar8,uVar7);
                    uVar7 = FUN_0160edfc(*(undefined8 *)puVar4,0x41);
                    FUN_02df8d44(uVar7,*(undefined8 *)puVar2,0);
                    puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
                    *puVar8 = uVar7;
                    thunk_FUN_01656ef8(puVar8,uVar7);
                    lVar5 = *(long *)puVar3;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar5 = *(long *)puVar3;
                    }
                    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                         **(undefined8 **)(lVar5 + 0xb8);
                    thunk_FUN_01656ef8();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


