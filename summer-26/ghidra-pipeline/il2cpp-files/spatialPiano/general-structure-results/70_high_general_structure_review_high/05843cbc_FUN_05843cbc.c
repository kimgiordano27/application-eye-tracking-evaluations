/*
FUNCTION_NAME: FUN_05843cbc
ENTRY_POINT: 05843cbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_05843cbc(undefined8 param_1,long param_2,long *param_3,undefined4 param_4,long param_5,
                 uint param_6)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long local_48;
  
  local_48 = param_5;
  if ((DAT_06bc0f83 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Clear__
                );
    FUN_02f08768(Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo);
    DAT_06bc0f83 = 1;
  }
  if ((param_2 != 0) && (plVar9 = *(long **)(param_2 + 0x10), plVar9 != (long *)0x0)) {
    uVar3 = FUN_050eed48(plVar9,0);
    plVar10 = (long *)*param_3;
    if ((uVar3 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        if ((param_6 & 1) == 0) {
          FUN_02a7da48(plVar9);
          uVar4 = (**(code **)(*plVar9 + 0x2d8))(plVar9,*(undefined8 *)(*plVar9 + 0x2e0));
          uVar4 = FUN_0583c1d4(uVar4,uVar4);
          uVar8 = thunk_FUN_02f6ef30(Method_Unity_Collections_FixedList4096Bytes<int>_set_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,uVar8);
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Clear__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar5 = Newtonsoft_Json_Linq_JToken__ReadFromAsync(plVar9,1,0);
        *param_3 = lVar5;
      }
      plVar10 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
      lVar5 = FUN_0582bfac(param_2,0);
      if (plVar10 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_05843f44:
          uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,0);
        }
        puVar2 = Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo;
        if ((int)plVar10[3] == 0) {
LAB_05843f38:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar10[4] = lVar5;
        lVar5 = FUN_050ef718(plVar9,*(undefined8 *)puVar2,plVar10,0);
        lVar6 = *param_3;
        plVar9 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
        if (plVar9 != (long *)0x0) {
          if ((param_5 != 0) &&
             (lVar7 = thunk_FUN_02f45174(param_5,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
          goto LAB_05843f44;
          if ((int)plVar9[3] == 0) goto LAB_05843f38;
          plVar9[4] = param_5;
          if (lVar5 != 0) {
            FUN_050163f0(lVar5,lVar6,plVar9,0);
            return;
          }
        }
      }
    }
    else {
      uVar4 = (**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
      puVar2 = PTR_DAT_067c9338;
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)(PTR_DAT_067c9338 + 0xa0) + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)(PTR_DAT_067c9338 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
      }
      lVar5 = FUN_0583c4e4(uVar4,plVar10,param_4,uVar4);
      *param_3 = lVar5;
      FUN_0582bcf8(param_2,&local_48,0);
      param_3 = (long *)*param_3;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)(puVar2 + 0xa0) + 0x130);
                    /* try { // try from 05843de8 to 05943e0b has its CatchHandler @ 05844380 */
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar2 + 0xa0)
           )) {
          FUN_050f7820(param_3,local_48,param_4,0);
                    /* try { // try from 05843e0c to 0594437b has its CatchHandler @ 05843bb4 */
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


