/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Serialize
ENTRY_POINT: 031b119c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Serialize(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(8);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar7 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_031b1388;
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_031b138c;
      memcpy(&stack0x000000d0,(void *)(lVar3 + lVar7),200);
      if (param_2 == 0) goto LAB_031b1388;
      pcVar11 = *(code **)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      memcpy(&stack0x00000198,&stack0x000000d0,200);
      uVar2 = (*pcVar11)(uVar5,&stack0x00000198,*(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) != 0) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar2 = (ulong)*(int *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 200;
    } while ((long)uVar10 < (long)uVar2);
  }
  if ((int)uVar2 <= (int)uVar10) {
    return 0;
  }
  uVar6 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      iVar8 = (int)uVar10;
      uVar4 = (uint)uVar6;
      if ((int)uVar2 <= iVar8) {
        FUN_0358d1e4(*(undefined8 *)(param_1 + 0x10),uVar6,(int)uVar2 - uVar4,0);
        iVar8 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar4;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar8 - uVar4;
      }
      lVar7 = (long)iVar8 * 200 + 0x20;
      uVar10 = (ulong)iVar8;
      do {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 == 0) goto LAB_031b1388;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_031b138c;
        memcpy(&stack0x000000d0,(void *)(lVar3 + lVar7),200);
        if (param_2 == 0) goto LAB_031b1388;
        pcVar11 = *(code **)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        memcpy(&stack0x00000198,&stack0x000000d0,200);
        uVar2 = (*pcVar11)(uVar5,&stack0x00000198,*(undefined8 *)(param_2 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(param_1 + 0x18);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 200;
      } while ((long)uVar10 < (long)uVar2);
      uVar9 = (uint)uVar10;
    } while ((int)uVar2 <= (int)uVar9);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_031b1388:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 <= uVar9) ||
       (memcpy(&stack0x00000008,(void *)(lVar7 + (long)(int)uVar9 * 200 + 0x20),200), uVar1 <= uVar4
       )) {
LAB_031b138c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar7 = lVar7 + (long)(int)uVar4 * 200;
    memcpy((void *)(lVar7 + 0x20),&stack0x00000008,200);
    thunk_FUN_01f51358(lVar7 + 0x98,0);
    uVar2 = (ulong)*(uint *)(param_1 + 0x18);
    uVar6 = (ulong)(uVar4 + 1);
  } while( true );
}


