/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 04c54f18
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  puVar1 = (undefined8 *)FUN_02ce0a7c();
                    /* try { // try from 04c54f3c to 04d54f4b has its CatchHandler @ 04c55194 */
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x50);
  lVar2 = thunk_FUN_02cea894(*unaff_x23);
                    /* try { // try from 04c54f58 to 04d54f67 has its CatchHandler @ 04c55184 */
  FUN_04c2c1d8(lVar2,0);
  if (lVar2 != 0) {
                    /* try { // try from 04c54f6c to 04d54f7b has its CatchHandler @ 04c550e4 */
    uVar7 = *(undefined8 *)PTR_DAT_065e6cb0;
    *(undefined1 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x10) = uVar7;
    *(undefined8 *)(lVar2 + 0x18) = 0;
                    /* try { // try from 04c54f7c to 04d5500b has its CatchHandler @ 04c54b48 */
    *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_04c54fd8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c54fd8:
      (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
      plVar6 = *(long **)(unaff_x19 + 0x50);
      lVar2 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar2,0);
      if (lVar2 != 0) {
                    /* try { // try from 04c5500c to 04d55013 has its CatchHandler @ 04c550e0 */
        uVar7 = *(undefined8 *)PTR_DAT_065e7008;
                    /* try { // try from 04c55014 to 04d550bf has its CatchHandler @ 04c54b48 */
        *(undefined1 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x10) = uVar7;
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                goto LAB_04c55078;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55078:
          (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
          plVar6 = *(long **)(unaff_x19 + 0x50);
          lVar2 = thunk_FUN_02cea894(*unaff_x23);
          FUN_04c2c1d8(lVar2,0);
          if (lVar2 != 0) {
            uVar7 = *(undefined8 *)PTR_DAT_065dfac0;
            *(undefined1 *)(lVar2 + 0x20) = 0;
            *(undefined8 *)(lVar2 + 0x10) = uVar7;
            *(undefined8 *)(lVar2 + 0x18) = 0;
                    /* try { // try from 04c550c0 to 04d550c3 has its CatchHandler @ 04c55198 */
            *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
            *(undefined8 *)(lVar2 + 0x30) = 0;
                    /* try { // try from 04c550c4 to 04d550c7 has its CatchHandler @ 04c55188 */
            if (plVar6 != (long *)0x0) {
                    /* try { // try from 04c550c8 to 04d550d3 has its CatchHandler @ 04c54b48 */
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 04c550d4 to 04d550d7 has its CatchHandler @ 04c550dc */
              if (uVar4 != 0) {
                    /* try { // try from 04c550d8 to 04d550ff has its CatchHandler @ 04c54b48 */
                    /* catch() { ... } // from try @ 04c550d4 with catch @ 04c550dc */
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                    /* catch() { ... } // from try @ 04c54d44 with catch @ 04c550e0
                       catch() { ... } // from try @ 04c5500c with catch @ 04c550e0 */
                    /* catch() { ... } // from try @ 04c54f6c with catch @ 04c550e4 */
                    /* catch() { ... } // from try @ 04c54d04 with catch @ 04c550e8 */
                  if (*(long *)(piVar5 + -2) == *unaff_x24) {
                    /* catch() { ... } // from try @ 04c55100 with catch @ 04c55110 */
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                    goto LAB_04c55118;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
                    /* try { // try from 04c55100 to 04d55103 has its CatchHandler @ 04c55110 */
              puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55118:
              (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
              plVar6 = *(long **)(unaff_x19 + 0x50);
              lVar2 = thunk_FUN_02cea894(*unaff_x23);
              FUN_04c2c1d8(lVar2,0);
              if (lVar2 != 0) {
                    /* try { // try from 04c55150 to 04d55183 has its CatchHandler @ 04c55250 */
                uVar7 = *(undefined8 *)PTR_DAT_065e7010;
                *(undefined1 *)(lVar2 + 0x20) = 0;
                *(undefined8 *)(lVar2 + 0x10) = uVar7;
                *(undefined8 *)(lVar2 + 0x18) = 0;
                *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
                *(undefined8 *)(lVar2 + 0x30) = 0;
                if (plVar6 != (long *)0x0) {
                  lVar3 = *plVar6;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                    /* catch() { ... } // from try @ 04c54f58 with catch @ 04c55184
                       try { // try from 04c55184 to 04d551c3 has its CatchHandler @ 04c54b48 */
                    /* catch() { ... } // from try @ 04c550c4 with catch @ 04c55188 */
                      if (*(long *)(piVar5 + -2) == *unaff_x24) {
                    /* catch() { ... } // from try @ 04c54e88 with catch @ 04c551a8 */
                    /* catch() { ... } // from try @ 04c54ec8 with catch @ 04c551ac */
                        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                        goto LAB_04c551b8;
                      }
                      uVar4 = uVar4 - 1;
                      piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 04c54f3c with catch @ 04c55194 */
                    } while (uVar4 != 0);
                  }
                    /* catch() { ... } // from try @ 04c550c0 with catch @ 04c55198 */
                  puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c551b8:
                    /* try { // try from 04c551c4 to 04d551c7 has its CatchHandler @ 04c551d4 */
                  (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
                  plVar6 = *(long **)(unaff_x19 + 0x50);
                    /* catch() { ... } // from try @ 04c551c4 with catch @ 04c551d4 */
                  lVar2 = thunk_FUN_02cea894(*unaff_x23);
                  FUN_04c2c1d8(lVar2,0);
                  if (lVar2 != 0) {
                    uVar7 = *(undefined8 *)PTR_DAT_065e6f48;
                    *(undefined1 *)(lVar2 + 0x20) = 0;
                    *(undefined8 *)(lVar2 + 0x10) = uVar7;
                    *(undefined8 *)(lVar2 + 0x18) = 0;
                    *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
                    *(undefined8 *)(lVar2 + 0x30) = 0;
                    if (plVar6 != (long *)0x0) {
                      lVar3 = *plVar6;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 04c55214 to 04d5523b has its CatchHandler @ 04c55250 */
                      if (uVar4 != 0) {
                        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar5 + -2) == *unaff_x24) {
                    /* try { // try from 04c55248 to 04d5524f has its CatchHandler @ 04c55250 */
                    /* catch() { ... } // from try @ 04c55150 with catch @ 04c55250
                       catch() { ... } // from try @ 04c55214 with catch @ 04c55250
                       catch() { ... } // from try @ 04c55248 with catch @ 04c55250 */
                    /* try { // try from 04c55254 to 04d55347 has its CatchHandler @ 04c55254
                       catch() { ... } // from try @ 04c55254 with catch @ 04c55254
                       catch() { ... } // from try @ 04c553a8 with catch @ 04c55254
                       catch() { ... } // from try @ 04c555c4 with catch @ 04c55254
                       catch() { ... } // from try @ 04c555ec with catch @ 04c55254
                       catch() { ... } // from try @ 04c5569c with catch @ 04c55254
                       catch() { ... } // from try @ 04c55720 with catch @ 04c55254
                       catch() { ... } // from try @ 04c55780 with catch @ 04c55254 */
                            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                            goto LAB_04c55258;
                          }
                          uVar4 = uVar4 - 1;
                          piVar5 = piVar5 + 4;
                        } while (uVar4 != 0);
                      }
                    /* try { // try from 04c5523c to 04d55247 has its CatchHandler @ 04c54b48 */
                      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55258:
                      (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
                      plVar6 = *(long **)(unaff_x19 + 0x50);
                      lVar2 = thunk_FUN_02cea894(*unaff_x23);
                      FUN_04c2c1d8(lVar2,0);
                      if (lVar2 != 0) {
                        uVar7 = *(undefined8 *)PTR_DAT_065e6a08;
                        *(undefined1 *)(lVar2 + 0x20) = 0;
                        *(undefined8 *)(lVar2 + 0x10) = uVar7;
                        *(undefined8 *)(lVar2 + 0x18) = 0;
                        *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
                        *(undefined8 *)(lVar2 + 0x30) = 0;
                        if (plVar6 != (long *)0x0) {
                          lVar3 = *plVar6;
                          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                          if (uVar4 != 0) {
                            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                                goto LAB_04c552f8;
                              }
                              uVar4 = uVar4 - 1;
                              piVar5 = piVar5 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c552f8:
                    /* WARNING: Could not recover jumptable at 0x04c55318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


