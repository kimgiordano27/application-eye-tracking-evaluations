/*
FUNCTION_NAME: FUN_06a14f50
ENTRY_POINT: 06a14f50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;functionality_gaze_retrieval_or_extraction
*/


void FUN_06a14f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_210 [112];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  long local_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_70 [16];
  
  puVar2 = PTR_DAT_0727cc98;
  puVar1 = PTR_DAT_07279560;
  if ((DAT_076e2932 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_0727fc38);
    thunk_FUN_032e1da0(PTR_DAT_0727cc98);
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                      );
    DAT_076e2932 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_114 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  plVar4 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  System_IO_Enumeration_FileSystemEntry__set_OriginalRootDirectory(plVar4,0);
  plVar5 = (long *)FUN_032d5d3c(*(undefined8 *)puVar1,5);
  lVar6 = FUN_06becffc(param_1,0);
  if (plVar5 == (long *)0x0) {
LAB_06a15410:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_06a15404:
    uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar8,0);
  }
  puVar2 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
  puVar1 = PTR_DAT_0727fcb8;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_0333a630(plVar5 + 4,lVar6);
    local_70 = FUN_050143ac(param_1,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar6 = FUN_06a4af64(local_70,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_06a15404;
    puVar1 = PTR_DAT_0727fc38;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_0333a630(plVar5 + 5,lVar6);
      FUN_06a14d78(&uStack_180,param_1);
      uStack_7c = (undefined4)uStack_16c;
      uStack_78 = (undefined4)((ulong)uStack_16c >> 0x20);
      uStack_80 = uStack_170;
      uStack_88 = uStack_178;
      uStack_84 = local_174;
      local_90 = uStack_180;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar6 = FUN_06bf2c64(&local_90,param_2,0);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_06a15404;
      puVar1 = PTR_DAT_07279558;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_0333a630(plVar5 + 6,lVar6);
        local_184 = (undefined4)*(undefined8 *)(param_1 + 0x70);
        lVar6 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_184);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_06a15404;
        puVar2 = 
        Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__;
        puVar1 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar6;
          thunk_FUN_0333a630(plVar5 + 7,lVar6);
          local_190 = FUN_05014408(param_1,*(undefined8 *)puVar1);
          local_1a0 = *(undefined8 *)puVar2;
          uStack_198 = 0xffffffffffffffff;
          lVar6 = FUN_059596b4(&local_1a0,0);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_06a15404;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_0333a630(plVar5 + 8,lVar6);
            puVar3 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__;
            puVar2 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__;
            puVar1 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__;
            if (plVar4 != (long *)0x0) {
              FUN_057b98b8(plVar4,*(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__
                           ,plVar5,0);
              FUN_045032f4(auStack_210,param_1 + 0x68,*(undefined8 *)puVar3);
              memcpy(&local_100,auStack_210,0x70);
              puVar3 = 
              Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
              ;
              lVar6 = *(long *)puVar2;
              iVar9 = local_f0 + 1;
              local_f0 = iVar9;
              if (iVar9 < (int)uStack_f8) {
                do {
                  lVar7 = local_100;
                  local_f0 = iVar9;
                  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
                    FUN_032934b8();
                  }
                  memmove(auStack_210,(void *)(lVar7 + (long)iVar9 * 0x5c),0x5c);
                  memcpy(&uStack_ec,auStack_210,0x5c);
                  memcpy(&local_160,&uStack_ec,0x5c);
                  uVar8 = FUN_06a3ca70(&local_160,param_2,0);
                  FUN_057b8c88(plVar4,*(undefined8 *)puVar3,uVar8,0);
                  lVar6 = *(long *)puVar2;
                  iVar9 = local_f0 + 1;
                  local_f0 = iVar9;
                } while (iVar9 < (int)uStack_f8);
              }
              uStack_98 = 0;
              uStack_9c = 0;
              uStack_a4 = 0;
              local_a0 = 0;
              uStack_ac = 0;
              uStack_a8 = 0;
              uStack_b4 = 0;
              local_b0 = 0;
              uStack_bc = 0;
              uStack_b8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_d4 = 0;
              local_d0 = 0;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_ec = 0;
              uStack_e8 = 0;
              FUN_052e8214(&local_100,*(undefined8 *)puVar1);
              (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              return;
            }
            goto LAB_06a15410;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


