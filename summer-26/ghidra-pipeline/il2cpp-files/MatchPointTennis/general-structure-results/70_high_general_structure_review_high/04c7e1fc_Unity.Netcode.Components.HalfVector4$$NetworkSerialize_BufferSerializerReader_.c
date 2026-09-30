/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$NetworkSerialize<BufferSerializerReader>
ENTRY_POINT: 04c7e1fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


undefined8
Unity_Netcode_Components_HalfVector4__NetworkSerialize<BufferSerializerReader>(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  byte *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar8;
  long unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  long *in_stack_00000018;
  
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 04c7e0a0 with catch @ 04c7e1fc
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 04c7e0b8 with catch @ 04c7e200
                       catch(type#1 @ 0991e038) { ... } // from try @ 04c7e130 with catch @ 04c7e200
                        */
  if (*param_1 == 0) goto LAB_04c7e534;
  in_stack_00000008 = *(undefined8 *)(*param_1 + 0x28);
                    /* try { // try from 04c7e218 to 04d7e22f has its CatchHandler @ 04c7e270 */
  uVar3 = FUN_07a4ce38(**(undefined8 **)(unaff_x21 + 0x38),0);
  puVar1 = PTR_DAT_09f258f8;
                    /* try { // try from 04c7e230 to 04d7e25f has its CatchHandler @ 04c7e068 */
  if (*(int *)(*(long *)PTR_DAT_09f258f8 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f258f8);
  }
  uVar4 = FUN_0964f440(&stack0x00000008,uVar3);
  if ((uVar4 & 1) == 0) {
    if (unaff_x23 == 0) goto LAB_04c7e534;
    uVar4 = FUN_07a5840c();
    if ((uVar4 & 1) != 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_04c7e534;
      uVar4 = FUN_07a5840c();
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar4 = FUN_07a5629c();
        if ((uVar4 & 1) != 0) {
          bVar2 = *unaff_x20;
          goto LAB_04c7e4ac;
        }
        lVar8 = *unaff_x26;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar8 = *unaff_x26;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_04c7e534;
        in_stack_00000008 = *(undefined8 *)(lVar8 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar4 = FUN_0964f440(&stack0x00000008);
        if ((uVar4 & 1) == 0) goto LAB_04c7e528;
        goto LAB_04c7e258;
      }
    }
    uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x40));
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    lVar8 = thunk_FUN_04485110(uVar3,lVar8);
    if (lVar8 == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_04c7e534;
      (**(code **)(*unaff_x22 + 0x2a8))();
      lVar8 = *(long *)(unaff_x25 + 0x90);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_07a4ce38(lVar8 + 0x20,0);
      uVar4 = FUN_07a5629c();
      if ((uVar4 & 1) == 0) {
        lVar8 = *(long *)(unaff_x25 + 0x10);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_07a4ce38(lVar8 + 0x20,0);
        uVar4 = FUN_07a5629c();
        if ((uVar4 & 1) == 0) {
LAB_04c7e528:
          *unaff_x19 = 0;
          return 0;
        }
        plVar6 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x40));
      }
      else {
        plVar6 = (long *)FUN_07a2565c();
      }
    }
    else {
      uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x40));
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
      }
      plVar6 = (long *)thunk_FUN_04485110(uVar3,lVar8);
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    if (plVar6 == (long *)0x0) goto LAB_04c7e534;
    if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar8 + 0x40)) goto LAB_04c7e54c;
    pbVar7 = (byte *)thunk_FUN_04485360(plVar6);
    bVar2 = *pbVar7;
  }
  else {
LAB_04c7e258:
    plVar6 = in_stack_00000018;
                    /* try { // try from 04c7e260 to 04d7e26f has its CatchHandler @ 04c7e270 */
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 04c7e218 with catch @ 04c7e270
                       catch() { ... } // from try @ 04c7e260 with catch @ 04c7e270 */
      lVar8 = FUN_04481fb8(lVar8);
                    /* try { // try from 04c7e274 to 04d7e277 has its CatchHandler @ 04c7e280 */
    }
                    /* try { // try from 04c7e278 to 04d7e283 has its CatchHandler @ 04c7e068 */
    if (plVar6 == (long *)0x0) {
LAB_04c7e534:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar5 = thunk_FUN_04485110(plVar6,lVar8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar6,lVar8);
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    lVar5 = thunk_FUN_04485110(plVar6,lVar8);
    if (lVar5 == 0) {
LAB_04c7e54c:
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar6,lVar8);
    }
    bVar2 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    bVar2 = bVar2 & 1;
  }
LAB_04c7e4ac:
  *unaff_x19 = bVar2;
  return 1;
}


