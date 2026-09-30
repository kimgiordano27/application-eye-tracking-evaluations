/*
FUNCTION_NAME: FUN_078c2c5c
ENTRY_POINT: 078c2c5c
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_078c2c5c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,uint param_6,long *param_7,long *param_8,long param_9)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined4 local_78;
  
  if ((DAT_086eb5ad & 1) == 0) {
    FUN_0335b6c8(&DAT_084441d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0843f050,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08454a48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08457970,1);
    DataMemoryBarrier(2,3);
    DAT_086eb5ad = 1;
  }
  if (param_8 != (long *)0x0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar1 = (*DAT_086ef190)(param_8);
    if (lVar1 != 0) {
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar1,param_6 & 1);
      if (param_7 != (long *)0x0) {
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar1 = (*DAT_086ef190)(param_7);
        if (lVar1 != 0) {
          if (DAT_086ef278 == (code *)0x0) {
            DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)")
            ;
          }
          (*DAT_086ef278)(lVar1,param_6 & 1);
          if (*(long *)(param_5 + 0xc0) != 0) {
            if ((param_6 & 1) == 0) {
              uVar4 = FUN_078c2378();
            }
            else {
              uVar4 = FUN_078c313c();
            }
            (**(code **)(*param_8 + 0x2a8))(param_8,*(undefined8 *)(*param_8 + 0x2b0));
            (**(code **)(*param_7 + 0x2a8))
                      (uVar4,param_2,param_3,param_4,param_7,*(undefined8 *)(*param_7 + 0x2b0));
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar1 = (*DAT_086ef188)(param_7);
            if (DAT_086d7c54 == '\0') {
              FUN_0335b6c8(&DAT_083d2c90,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c54 = '\x01';
            }
            if (lVar1 != 0) {
              lVar3 = *(long *)(DAT_083d2c90 + 0xb8);
              FUN_07a19820(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                           *(undefined4 *)(lVar3 + 0x14),lVar1,0);
              if (*(long *)(param_5 + 0xc0) != 0) {
                uVar4 = FUN_078c35ec(*(long *)(param_5 + 0xc0),param_9);
                FUN_07ade03c(param_7,uVar4,0);
                if (param_9 != 0) {
                  uVar4 = FUN_073e79c8(*(undefined8 *)(param_9 + 0x20),
                                       *(undefined8 *)(param_9 + 0x28),0);
                  uVar2 = FUN_0666e380(uVar4,DAT_08454a48);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_0666e380(uVar4,DAT_08457970);
                    if ((uVar2 & 1) != 0) {
                      (**(code **)(*param_8 + 0x5e8))
                                (param_8,DAT_084441d8,*(undefined8 *)(*param_8 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x078c3008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*param_7 + 0x2a8))
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_7,
                                 *(undefined8 *)(*param_7 + 0x2b0));
                      return;
                    }
                    if (*(long *)(param_5 + 0xc0) != 0) {
                      FUN_07ade03c(param_7,*(undefined8 *)(*(long *)(param_5 + 0xc0) + 0x50),0);
                      return;
                    }
                  }
                  else {
                    (**(code **)(*param_8 + 0x5e8))
                              (param_8,DAT_0843f050,*(undefined8 *)(*param_8 + 0x5f0));
                    (**(code **)(*param_7 + 0x2a8))
                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_7,
                               *(undefined8 *)(*param_7 + 0x2b0));
                    if (DAT_086ef188 == (code *)0x0) {
                      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                    }
                    lVar1 = (*DAT_086ef188)(param_7);
                    if (lVar1 != 0) {
                      local_80 = DAT_012e3600;
                      local_78 = 0x3f800000;
                      if (DAT_086ef9d0 == (code *)0x0) {
                        DAT_086ef9d0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                                  );
                      }
                      (*DAT_086ef9d0)(lVar1,&local_80);
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


