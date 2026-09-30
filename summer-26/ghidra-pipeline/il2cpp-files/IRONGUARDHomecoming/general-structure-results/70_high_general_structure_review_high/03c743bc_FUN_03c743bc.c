/*
FUNCTION_NAME: FUN_03c743bc
ENTRY_POINT: 03c743bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_16
*/


void FUN_03c743bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if ((DAT_04839c69 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045713e0);
    DAT_04839c69 = 1;
  }
  plVar2 = (long *)FUN_01f08890(*(undefined8 *)puVar1,0x10);
  lVar3 = FUN_03552dac(param_1,param_2,param_3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_01f51358(plVar2 + 4,lVar3);
    lVar3 = FUN_03552dac(param_1 + 0x20,param_2,param_3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_01f51358(plVar2 + 5,lVar3);
      lVar3 = FUN_03552dac(param_1 + 0x40,param_2,param_3,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_01f51358(plVar2 + 6,lVar3);
        lVar3 = FUN_03552dac(param_1 + 0x60,param_2,param_3,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          thunk_FUN_01f51358(plVar2 + 7,lVar3);
          lVar3 = FUN_03552dac(param_1 + 8,param_2,param_3,0);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_01f51358(plVar2 + 8,lVar3);
            lVar3 = FUN_03552dac(param_1 + 0x28,param_2,param_3,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_01f51358(plVar2 + 9,lVar3);
              lVar3 = FUN_03552dac(param_1 + 0x48,param_2,param_3,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_01f51358(plVar2 + 10,lVar3);
                lVar3 = FUN_03552dac(param_1 + 0x68,param_2,param_3,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_01f51358(plVar2 + 0xb,lVar3);
                  lVar3 = FUN_03552dac(param_1 + 0x10,param_2,param_3,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto 
                       UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                       ;
                  if (8 < *(uint *)(plVar2 + 3)) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_01f51358(plVar2 + 0xc,lVar3);
                    lVar3 = FUN_03552dac(param_1 + 0x30,param_2,param_3,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0))
                    goto 
                    UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize;
                    if (9 < *(uint *)(plVar2 + 3)) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_01f51358(plVar2 + 0xd,lVar3);
                      lVar3 = FUN_03552dac(param_1 + 0x50,param_2,param_3,0);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0))
                      goto 
                      UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                      ;
                      if (10 < *(uint *)(plVar2 + 3)) {
                        plVar2[0xe] = lVar3;
                        thunk_FUN_01f51358(plVar2 + 0xe,lVar3);
                        lVar3 = FUN_03552dac(param_1 + 0x70,param_2,param_3,0);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0))
                        goto 
                        UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                        ;
                        if (0xb < *(uint *)(plVar2 + 3)) {
                          plVar2[0xf] = lVar3;
                          thunk_FUN_01f51358(plVar2 + 0xf,lVar3);
                          lVar3 = FUN_03552dac(param_1 + 0x18,param_2,param_3,0);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar4 == 0))
                          goto 
                          UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                          ;
                          if (0xc < *(uint *)(plVar2 + 3)) {
                            plVar2[0x10] = lVar3;
                            thunk_FUN_01f51358(plVar2 + 0x10,lVar3);
                            lVar3 = FUN_03552dac(param_1 + 0x38,param_2,param_3,0);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                               lVar4 == 0))
                            goto 
                            UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                            ;
                            if (0xd < *(uint *)(plVar2 + 3)) {
                              plVar2[0x11] = lVar3;
                              thunk_FUN_01f51358(plVar2 + 0x11,lVar3);
                              lVar3 = FUN_03552dac(param_1 + 0x58,param_2,param_3,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                                 lVar4 == 0))
                              goto 
                              UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                              ;
                              if (0xe < *(uint *)(plVar2 + 3)) {
                                plVar2[0x12] = lVar3;
                                thunk_FUN_01f51358(plVar2 + 0x12,lVar3);
                                lVar3 = FUN_03552dac(param_1 + 0x78,param_2,param_3,0);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)
                                                              ), lVar4 == 0))
                                goto 
                                UnityEngine_Rendering_Universal_PixelPerfectCameraInternal__OnAfterDeserialize
                                ;
                                puVar1 = PTR_DAT_045713e0;
                                if (0xf < *(uint *)(plVar2 + 3)) {
                                  plVar2[0x13] = lVar3;
                                  thunk_FUN_01f51358(plVar2 + 0x13,lVar3);
                                  FUN_0340f378(*(undefined8 *)puVar1,plVar2,0);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


